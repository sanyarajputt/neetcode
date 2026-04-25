class Solution {
public:
    bool validate(TreeNode* node, long minVal, long maxVal) {
        // 1. Base Case: Khali tree hamesha valid hota hai
        if (!node) return true;

        // 2. Condition: Agar node value range se bahar hai toh false
        // Yahan semicolon (;) nahi aayega if ke baad
        if (node->val <= minVal || node->val >= maxVal) {
            return false;
        }

        // 3. Recursion: Left aur Right dono subtrees valid hone chahiye
        // Left jate waqt max limit node->val ban jayegi
        // Right jate waqt min limit node->val ban jayegi
        return validate(node->left, minVal, (long)node->val) && 
               validate(node->right, (long)node->val, maxVal);
    }

    bool isValidBST(TreeNode* root) {
        // Sirf 'root' pass karein, 'TreeNode* node' nahi
        return validate(root, LONG_MIN, LONG_MAX);
    }
};
