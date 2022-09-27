# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def evaluateTree(self, root: Optional[TreeNode]) -> bool:
        
        
        def helper(root):        
            if not root.left and not root.right:
                return bool(root.val)
            
            if root.val == 2:
                return helper(root.right) or helper(root.left)

            if root.val == 3:
                return helper(root.right) and helper(root.left)
            
        return helper(root)