class Solution {
    void postTraversal(TreeNode* root, vector<int> &post){
    if(root==NULL) return;
    postTraversal(root->left,post);
    postTraversal(root->right,post);
    post.push_back(root->val);
}
public:
    vector<int> postorderTraversal(TreeNode* root) {
     vector<int>post;
    postTraversal(root,post);
    return post;
    }
};