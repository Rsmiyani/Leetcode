class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> frq;
        bool find1st = false;
        for(int i=0; i<s.size(); i++){
            frq[s[i]]++;
        }
        for(int i =0; i<s.size(); i++){
            if(frq[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};