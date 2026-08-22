class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        vector<int> fn;
       map<int,int> frq;
       for(int i=0; i<arr.size(); i++){
           frq[arr[i]]++;
       }
       for(auto it:frq){
           if(it.second == 1){
               fn.push_back(it.first);
           }
       }
       if(fn[0] <= fn [1]){
           return fn;
       }
       else{
           swap(fn[0],fn[1]);
       }
    }
};