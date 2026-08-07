class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();

        int top = 0;
        int bot = rows -1;

        while (top <=bot){
            int midr = top+(bot-top)/2;

            if (matrix[midr][col-1] < target){
                top = midr +1;
            }else if (matrix[midr][0]>target){
                bot = midr-1;
            }else{
                break;
            }
        } 
        
        if(top>bot){
            return false;
        }
        int row = top + (bot - top) / 2;
         int l = 0;
        int r = col-1;

        while (l <= r) {
            // Prevents potential integer overflow compared to (l + r) / 2
            int mid = l + (r - l) / 2;

            if (matrix[row][mid] == target) {
                return true;
            } else if (matrix[row][mid] < target) {
                l = mid + 1; // Search right half
            } else {
                r = mid - 1; // Search left half
            }
        } return false;
    } 
};
