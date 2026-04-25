class Solution {
public:
int preIdx=0;
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int start,int end) {
        if (start>end) return NULL;

        int val = preorder[preIdx++];
        TreeNode*root = new TreeNode(val);

        int  pivot=0;
        for(int i = start;i<=end;i++){
            if(inorder[i] == val){
                pivot=i;
                break;

            }
        }
        root->left = build(preorder, inorder, start, pivot - 1);
        root->right = build(preorder, inorder, pivot + 1, end);
        return root;


    }
    TreeNode*buildTree(vector <int>&preorder , vector<int>&inorder){
        return build(preorder, inorder, 0, inorder.size() - 1);
    }
};
