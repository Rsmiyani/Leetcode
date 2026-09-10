class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count =0;
        for(int i=0; i<nums.size(); i++){
            long curr_mul =1;
            for(int j=i; j<nums.size(); j++){
                curr_mul *= nums[j];
                if(curr_mul >=k){
                    break;
                }
                else{
                    count++;}
                    
            }
            
        }
        return count;
    }
};