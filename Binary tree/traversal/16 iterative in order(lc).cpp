class Solution {

public:
    vector<int> inorderTraversal(TreeNode* root) {
            stack<pair<TreeNode*,int>> st;
    // 0 is -> left will be pushed
    // 1 is -> right will be pushed
    // 2 is -> top will pop
    st.push({root,0});
    vector <int> ans;
    if(root==NULL) return ans;
    while(!st.empty()){
        if(st.top().second == 2){
            st.pop();
        } 
        else if(st.top().second == 0){
            // check if left is null
            st.top().second++;
            if(st.top().first->left != NULL){
                st.push({st.top().first->left,0});
            } 
        }
        else if(st.top().second == 1){
            // check if right is null
            ans.push_back(st.top().first->val);
            st.top().second++;
            if(st.top().first->right != NULL){
                st.push({st.top().first->right,0});
            }
        }
    }
    return ans;

    }
};