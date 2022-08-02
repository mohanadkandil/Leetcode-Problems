class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int ss = s.length(), tt = t.length();
        
        int i = 0, j = 0;
        
        while(i < ss and j < tt) {
            if (s[i] == t[j]) i++;
            j++;
        }
        return ss == i ? true : false;
    }
};




