# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        
        def dfs(root):
            nonlocal sum

            if root is None:
                return 0

            if root.val in range(low, high + 1):
                sum += root.val
            
            dfs(root.left)
            dfs(root.right) 
            
        sum = 0
        dfs(root)
        return sum