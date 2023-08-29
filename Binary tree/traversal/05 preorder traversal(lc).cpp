class Solution {
public:
    void preTraversal(TreeNode* root , vector<int> &pre){
    if(root == NULL) return;
    pre.push_back(root->val);
    preTraversal(root->left,pre);
    preTraversal(root->right,pre);
    }
    vector<int> preorderTraversal(TreeNode* root) {
    vector<int> pre;
    preTraversal(root,pre);
    return pre;
    }
};