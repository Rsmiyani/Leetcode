class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> fn;
        map<int,int> frq; 
        for(int i=1; i<nums.size()+1; i++){
            frq[i]++;
        }
        for(int i = 0; i<nums.size(); i++){
            frq[nums[i]]++;
        }
        for(auto it : frq){
            if(it.second == 1)
            {
                fn.push_back(it.first);
            }
        }
        return fn;
    }
};