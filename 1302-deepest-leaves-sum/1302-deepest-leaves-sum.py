# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
        
        qlen, ans, q = 0, 0, [root]
        
        while len(q):
            ans, qlen = 0, len(q)
             
            for _ in range(qlen):
                
                curr = q.pop(0)
                
                ans += curr.val
                
                if curr.left: q.append(curr.left)
                if curr.right: q.append(curr.right)
                
        return ans
                