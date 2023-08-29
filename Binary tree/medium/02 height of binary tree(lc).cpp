class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int h1 = maxDepth(root->left);
        int h2 = maxDepth(root->right);
        return  1 + max(h1,h2);
    }
};