class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        a, b = Counter(ransomNote), Counter(magazine)
        
        if len(b) < len(a):
            return False
    
        for k in a:
            if k not in b or a[k] > b[k]:
                return False
        return True