class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        l, r = 0, len(nums) - 1
        i = 0
        
        # 2 in the right sub array
        # 1 in the middle of the sub array
        # 0 in the left parition of the sub arry
        
        def swap(i, j):
            tmp = nums[i]
            nums[i] = nums[j]
            nums[j] = tmp
        
        while i <= r:
            if nums[i] == 0:
                swap(l, i)
                l += 1
                
            elif nums[i] == 2:
                swap(i, r)
                r -= 1
                i -= 1
            i += 1
        