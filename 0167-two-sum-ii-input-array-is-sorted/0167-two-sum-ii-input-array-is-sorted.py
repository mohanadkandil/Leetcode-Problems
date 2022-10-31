class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        
        # O(n ^ 2) time
        # O (1) space
        
        l, r = 0, len(numbers) - 1
        
        while l < r:
            currSum = numbers[l] + numbers[r]
            
            if currSum > target:
                r -= 1
            elif currSum < target:
                l += 1
            else:
                # found 
                return [l + 1, r + 1]
        return []
            
            