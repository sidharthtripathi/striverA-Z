class Solution {
public:
    int countNodes(TreeNode* root) {
    if(root == NULL) return 0;
  int ln = countNodes(root->left);
  int rn = countNodes(root->right);
  return 1 + ln + rn;
    }
};