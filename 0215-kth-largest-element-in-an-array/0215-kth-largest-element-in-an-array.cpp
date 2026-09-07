class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       int count = k;                                                     
       int fn=0;
       sort(nums.begin(),nums.end());
       
       
       return nums[nums.size()-k]; 
    }
};