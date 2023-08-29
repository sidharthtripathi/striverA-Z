void inTraversal(TreeNode* root , vector<int>&in){
    if(root==NULL) return;
    inTraversal(root->left,in);
    in.push_back(root->data);
    inTraversal(root->right,in);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>in;
    inTraversal(root,in);
    return in;

}