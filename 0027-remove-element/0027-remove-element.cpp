class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == val){
                nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
            }
        }
        size=nums.size();
        return size;
    
    }
};