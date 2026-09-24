class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        
        for(int i=0; i<nums.size(); i++){
            int temp = nums[i];
            int sum = 0;
            int digit = 0;
            while(temp >0){ 
            digit = temp%10;
            sum += digit;
            temp = temp/10;
            }
            
            if(sum == i){
                return i;
            }


            
        }
        return -1;
    }
};