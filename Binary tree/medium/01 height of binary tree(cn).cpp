int heightOfBinaryTree(TreeNode<int> *root)
{   //base case
    if(root==NULL) return 0;
	
    int h1 = heightOfBinaryTree(root->left);
    int h2 = heightOfBinaryTree(root->right);
    return 1 + max(h1,h2);
}