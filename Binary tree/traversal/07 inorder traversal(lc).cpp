class Solution {
    void inTraversal(TreeNode* root , vector<int>&in){
    if(root==NULL) return;
    inTraversal(root->left,in);
    in.push_back(root->val);
    inTraversal(root->right,in);
}
public:
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int>in;
    inTraversal(root,in);
    return in;

    }
};