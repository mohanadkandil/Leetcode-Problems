# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isUnivalTree(self, root: Optional[TreeNode]) -> bool:
        
        # Time -> O(n)
        # Space -> O(n)
        
        head = root.val
        
        def helper(root):
            if root is None:
                return True
            if root.val != head:
                return False
            else:
                return helper(root.left) and helper(root.right)
            
        return helper(root)
        
        
        
        
        