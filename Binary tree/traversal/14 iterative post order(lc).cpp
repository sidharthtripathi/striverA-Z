/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL) return {};
            stack<pair<TreeNode*,int>> st;
    // 0 is -> left will be pushed
    // 1 is -> right will be pushed
    // 2 is -> top will pop
    st.push({root,0});
    vector<int> ans = {root->val};
    while(!st.empty()){
        if(st.top().second == 2) st.pop();
        else if(st.top().second == 0){
            // check if left is null
            st.top().second++;
            if(st.top().first->left != NULL){
                st.push({st.top().first->left,0});
                ans.push_back(st.top().first->val);
            } 
        }
        else if(st.top().second == 1){
            // check if right is null
            st.top().second++;
            if(st.top().first->right != NULL){
                st.push({st.top().first->right,0});
                ans.push_back(st.top().first->val);
            }
        }
    }
    return ans;
    }
};