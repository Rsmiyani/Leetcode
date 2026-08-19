class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> unsorted = heights;
        sort(heights.begin(),heights.end());
        for(int i=0; i<heights.size(); i++){
            if(heights[i] != unsorted[i]){
                count++;
            }
        }
        return count;
    }
};