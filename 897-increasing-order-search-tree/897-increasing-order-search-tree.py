# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        
        self.node = node = TreeNode()
        
        def dfs(root):
            if not root:
                return None
            dfs(root.left)
            self.node.right = TreeNode(root.val)
            self.node.left = None
            self.node = self.node.right
            dfs(root.right)
            
        dfs(root)
        return node.right
        
       