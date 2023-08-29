void postTraversal(TreeNode* root, vector<int> &post){
    if(root==NULL) return;
    postTraversal(root->left,post);
    postTraversal(root->right,post);
    post.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>post;
    postTraversal(root,post);
    return post;
}