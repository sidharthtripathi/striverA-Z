void preTraversal(TreeNode<int>* root , vector<int> &pre){
    if(root == NULL) return;
    pre.push_back(root->data);
    preTraversal(root->left,pre);
    preTraversal(root->right,pre);
}
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int> pre;
    preTraversal(root,pre);
    return pre;
}