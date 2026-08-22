class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        vector<int> fn;
        int count = 0;
        int cl = 0;
        // first we find an first thing 
        for(int i=0; i<arr.size(); i++){
            if(count==0){
            if(arr[i] == x){
                fn.push_back(i);
                count++; 
            }
        }
        
    }
        for(int i=arr.size()-1; i>=0; i--){
            if(cl==0){
            if(arr[i] == x){
                fn.push_back(i);
                cl++; 
            }
        }
        }
        
    if(count == 0){
        fn.push_back(-1);
    }
     if(cl == 0){
        fn.push_back(-1);
    }
        return fn;
}
    
};