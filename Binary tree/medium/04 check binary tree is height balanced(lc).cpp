class Solution {
    int heightOfBinaryTree(TreeNode *root)
{   //base case
    if(root==NULL) return 0;
	
    int h1 = heightOfBinaryTree(root->left);
    int h2 = heightOfBinaryTree(root->right);
    return 1 + max(h1,h2);
}
int modi(int a){
    return a<0 ? -a : a;
}
public:
    bool isBalanced(TreeNode* root) {
    if(root==NULL) return true;

    bool lBal = isBalanced(root->left);
    if(lBal == false) return false;
    bool rBal = isBalanced(root->right);
    if(rBal == false) return false;
    int lh = heightOfBinaryTree(root->left);
    int rh = heightOfBinaryTree(root->right);
    if(modi(lh-rh)>1) return false;
    else return true;
    }
};