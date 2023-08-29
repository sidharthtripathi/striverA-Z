void traversal(TreeNode* root , vector<int> &inorder , vector<int> &postorder, vector<int> &preorder){
    if(root==NULL) return;
    preorder.push_back(root->data);
    traversal(root->left,inorder,postorder,preorder);
    inorder.push_back(root->data);
    traversal(root->right,inorder,postorder,preorder);
    postorder.push_back(root->data);


}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<int> ino,pos,pre;
    traversal(root,ino,pos,pre);
    vector<vector<int>> ans = {ino,pre,pos};
    return ans;


}