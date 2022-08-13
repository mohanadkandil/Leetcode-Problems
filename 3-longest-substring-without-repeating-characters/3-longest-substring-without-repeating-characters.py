class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        charSet = set()
        
        left = 0
        answer = 0
        for r in range(len(s)):
            
            while s[r] in charSet:
                charSet.remove(s[left])
                left += 1
            charSet.add(s[r])
            
            answer = max(answer, r - left + 1)
            
        return answer
        