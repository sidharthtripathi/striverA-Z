Node* createTree(vector<int>&arr){
    // Write your code here.
    if(arr.size()==0) return NULL;
    queue<pair<Node*,int>> q;
    Node* root = new Node(arr[0]);
    q.push({root,0});
    for(int i = 1; i<arr.size() ; i++){
        Node* newnode = new Node(arr[i]);
        if(q.front().second == 2) q.pop();

        if (q.front().second == 0) {
          q.front().first->left = newnode;

        }
        else if(q.front().second == 1){
            q.front().first->right = newnode;
        }
        q.front().second++;
        q.push({newnode,0});
        
    }
    return root;
    
}