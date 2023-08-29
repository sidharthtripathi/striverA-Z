vector<int> levelOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int> ans;
    if(root==NULL) return ans;
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int>* node = q.front();
        q.pop();
        ans.push_back(node->data);
        // push its childerens
        if(node->left != NULL) q.push(node->left);
        if(node->right != NULL) q.push(node->right);
    }
    return ans;
    
}