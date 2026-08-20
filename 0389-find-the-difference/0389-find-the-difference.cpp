class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = 0;
        for(char ss : s){
            c =c^ss;
        }
        for(char tt : t){
            c = c^tt;
        }

        return c;
    }
};