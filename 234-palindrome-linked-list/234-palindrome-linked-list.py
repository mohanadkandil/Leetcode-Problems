# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        
        # get the mid point using the fast and slow pointer approach
        slow, fast = head, head.next
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        # reverse the second half of the list
        head2 = slow.next
        slow.next = None
        prev, curr = None, head2
        while curr:
            tmp = curr.next
            curr.next = prev
            prev, curr = curr, tmp
        
        head2 = prev
        curr, curr2 = head, head2
        while curr2:
            if curr.val != curr2.val:
                return False
            curr = curr.next
            curr2 = curr2.next
        return True
    
        
        