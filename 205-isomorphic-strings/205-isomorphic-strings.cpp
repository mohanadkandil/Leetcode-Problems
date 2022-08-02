class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> mp;
        unordered_map<char, int> mp2;
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]] = i + 1;
            mp2[t[i]] = i + 1;

        }
       
        for(int i = 0; i < t.size(); i++) {
            if (mp2[t[i]] != mp[s[i]]) {
                return false;
            }
        }
        return true;
    }
};