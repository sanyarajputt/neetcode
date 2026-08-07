class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] == target) {
                return mid; // Return the index of target
            }

            // Check if the left portion is sorted
            if (nums[l] <= nums[mid]) {
                if (target >= nums[l] && target < nums[mid]) {
                    r = mid - 1; // Target is in the left half
                } else {
                    l = mid + 1; // Target is in the right half
                }
            } 
            // Otherwise, the right portion must be sorted
            else {
                if (target > nums[mid] && target <= nums[r]) {
                    l = mid + 1; // Target is in the right half
                } else {
                    r = mid - 1; // Target is in the left half
                }
            }
        }

        return -1; // Target not found
    }
};