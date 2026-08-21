class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      vector<int> fn;
      int sum = 0;
      for(int i = 0; i<nums.size(); i++){
        if(i==0){
            fn.push_back(nums[i]);
            sum = nums[i];
        }
        if(i>=1){
            sum =sum+nums[i];
            fn.push_back(sum);
        }
      }
      return fn;
      
    }
};