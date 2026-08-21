class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>fn;
        for(int i=0; i<n; i++){
            fn.push_back(nums[i]);
            fn.push_back(nums[i+n]);
        }
        return fn;

    }
};