class Solution {
    public:
    int count = 0;
    
    void dfs(TreeNode* node, int maxSoFar){
         if (!node) return;
         
         if(node->val >= maxSoFar){
            count++;
            maxSoFar = node->val;
         }
         
         dfs(node->left,maxSoFar);
         dfs(node->right,maxSoFar);
         }
    int goodNodes(TreeNode* root) {
     if (!root) return 0;

    dfs(root,root->val);
    return count; 
    }
};