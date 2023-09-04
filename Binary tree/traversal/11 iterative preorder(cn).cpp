#include <stack>
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    stack<pair<TreeNode<int>*,int>> st;
    // 0 is -> left will be pushed
    // 1 is -> right will be pushed
    // 2 is -> top will pop
    st.push({root,0});
    vector<int> ans = {root->data};
    while(!st.empty()){
        if(st.top().second == 2) st.pop();
        else if(st.top().second == 0){
            // check if left is null
            st.top().second++;
            if(st.top().first->left != NULL){
                st.push({st.top().first->left,0});
                ans.push_back(st.top().first->data);
            } 
        }
        else if(st.top().second == 1){
            // check if right is null
            st.top().second++;
            if(st.top().first->right != NULL){
                st.push({st.top().first->right,0});
                ans.push_back(st.top().first->data);
            }
        }
    }
    return ans;
}