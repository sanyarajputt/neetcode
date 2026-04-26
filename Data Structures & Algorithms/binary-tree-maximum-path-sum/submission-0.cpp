/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
int maxSum = INT_MIN;

int calculateGain(TreeNode* root){
    if(!root) return 0;

    int leftgain = max(0,calculateGain(root->left));
    int rightgain = max(0,calculateGain(root->right));

    int currentPathsum = root->val + leftgain + rightgain;

    maxSum = max(maxSum,currentPathsum);

    return root->val + max(leftgain, rightgain);
}

    int maxPathSum(TreeNode* root) {
        calculateGain(root);
        return maxSum;
    

    }
};
