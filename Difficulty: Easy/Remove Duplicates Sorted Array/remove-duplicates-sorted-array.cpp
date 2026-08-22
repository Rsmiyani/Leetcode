class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        vector<int> fn;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]!=arr[i+1]){
                fn.push_back(arr[i]);
            }
            else{
                continue;
            }
        }
        return fn;
    
    }
};