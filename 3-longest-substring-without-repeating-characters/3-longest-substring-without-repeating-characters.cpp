class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<int> set;
        
        int answer = 0, left = 0;
        
        for (int r = 0; r < s.length(); r++) {
                while (left < r and set.find(s[r]) != set.end()) {
                    set.erase(s[left]);
                    left++;
                }
            answer = max(answer, r - left + 1);
            set.insert(s[r]);
        }
        
        return answer;
        
        
    }
};