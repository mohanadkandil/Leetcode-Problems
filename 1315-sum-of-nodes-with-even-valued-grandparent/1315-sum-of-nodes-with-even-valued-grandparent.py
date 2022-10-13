# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumEvenGrandparent(self, root: TreeNode) -> int:
        
        ans = 0
        
        def rec(node, parent, grandParent):
            nonlocal ans
            if node is None:
                return
            
            if grandParent and grandParent.val % 2 == 0:
                ans += node.val
                
            rec(node.left, node, parent)
            rec(node.right, node, parent)
            
        rec(root, None, None)
        
        return ans
        