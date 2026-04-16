class Solution {
public:
    vector<int> result;

    void traverse(Node* root) {
        if (!root) return;

      
        for (Node* child : root->children) {
            traverse(child);
        }

       
        result.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        result.clear(); 
        traverse(root);
        return result;
    }
};