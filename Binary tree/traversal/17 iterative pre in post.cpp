vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<int> ino,pos,pre;
     stack<pair<TreeNode*,int>> st;
    // 0 is -> left will be pushed
    // 1 is -> right will be pushed
    // 2 is -> top will pop
    st.push({root,0});
    pre = {root->data};
    while(!st.empty()){
        if(st.top().second == 2){
            pos.push_back(st.top().first->data);
            st.pop();
        } 
        else if(st.top().second == 0){
            // check if left is null
            st.top().second++;
            if(st.top().first->left != NULL){
                pre.push_back(st.top().first->left->data);
                st.push({st.top().first->left,0});
            } 
        }
        else if(st.top().second == 1){
            // check if right is null
            ino.push_back(st.top().first->data);
            st.top().second++;
            if(st.top().first->right != NULL){
                pre.push_back(st.top().first->right->data);
                st.push({st.top().first->right,0});
            }
        }
    }
    vector<vector<int>> ans = {ino,pre,pos};
    return ans;


}