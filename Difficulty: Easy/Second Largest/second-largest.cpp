class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        for(int i=arr.size()-1; i>0; i--){
            if(arr[i] != arr[i-1]){
                return arr[i-1];
            }
            else{
                continue;
            }
        }
        return -1;
        
    }
};