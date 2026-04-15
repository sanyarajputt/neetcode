class Solution {
public:
vector <int> results;
void inorder(TreeNode* root){
    if (!root) return;

     results.push_back(root->val);
     inorder(root->left);
     inorder(root->right);
}
vector <int> preorderTraversal(TreeNode* root){
    inorder(root);
    return results;
}

};
