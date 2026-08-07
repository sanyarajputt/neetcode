class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int res = r;

        while (l <= r) {
            int k = l + (r - l) / 2;
            long long hours = 0;

            // Iterate over each pile in piles
            for (int p : piles) {
                // Round up calculation for hours needed per pile
                hours += (p + k - 1) / k; 
            }

            if (hours <= h) {
                res = k;     // Valid speed found, try to find a smaller speed
                r = k - 1;
            } else {
                l = k + 1;   // Too slow, increase eating speed
            }
        }

        return res;
    }
};
