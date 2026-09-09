class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //input-array
        //initialize set

        // ds/algo - set
        unordered_set<int>seen;

        //what to do with data
        // check if every element is visited
        // for when going through array check if any match
        for(int num: nums){
            if(seen.count(num)){
                return true;
            }
            seen.insert(num);
        }
        return false;

        // ouput
    }
};