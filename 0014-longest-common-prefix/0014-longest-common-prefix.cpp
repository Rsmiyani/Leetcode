class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs[0] == ""){
            return "";
        }
        sort(strs.begin(),strs.end());
        string first = strs.front();
        string last = strs.back();
        string res = "";
        for(int i = 0; i<min(first.size(),last.size()); i++){
            if(first[i]==last[i]){
                res += first[i];
            }
            else{
                break;
            }
        }
        return res;        
    }
};