class Solution {
public:
    int firstUniqChar(string s) {
        
        int len = s.size();
        if (len == 1) return 0;
        
        
        int arr[26];
        memset(arr, 0, sizeof(arr));
        
        for (int i = len - 1; i >= 0; i--) {
            arr[s[i] - 97]++; 
        }
        
        for (int i = 0; i < len; i++) {
            if (arr[s[i] - 97] == 1)
                return i;
        }
        
        return -1;
        
        
        
        
    }
};