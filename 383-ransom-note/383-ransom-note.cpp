class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int arr[26];
        bool ans = true;
        memset(arr, 0, sizeof(arr));
        
        for(int i = 0; i < magazine.length(); i++){
            arr[int(magazine[i]) - 97]++;
        }
        
        for(int i = 0; i < ransomNote.length(); i++){
            if (!arr[int(ransomNote[i]) - 97])
                return false;
            else
                arr[int(ransomNote[i]) - 97]--;
        }
        return true;

    }
};