class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.length() != t.length()) return false;
        
        int arr[26] = {0};
        
        for(int i = 0; i < s.length(); i++) {
            arr[t[i] - 'a']++;
            arr[s[i] - 'a']--;
        }
        
        for(int count: arr) {
            if (count != 0) return false;
        }
        return true;
        
    }
};