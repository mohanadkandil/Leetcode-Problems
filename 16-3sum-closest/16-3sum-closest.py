class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        result = nums[0] + nums[1] + nums[2]
        for i in range(len(nums) - 2):
            j, k = i + 1, len(nums) - 1
            
            while j < k:
                ssum = nums[i] + nums[j] + nums[k]
                
                if ssum == target:
                    return ssum
                
                if abs(ssum - target) < abs(result - target):
                    result = ssum
                
                if ssum < target:
                    j += 1
                elif ssum > target:
                    k -= 1
                    
        return result
            
        
        
        
        