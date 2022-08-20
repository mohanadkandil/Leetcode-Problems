/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ptr1 = head,*ptr2 = head, *tmp = new ListNode;
        
        while(n--){
            ptr1 = ptr1->next;
            if(!ptr1)
                return head->next;
        }
        while(ptr1->next){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        tmp = ptr2->next;
        ptr2->next = ptr2->next->next;
        delete tmp;
        return head;
        
        
    }
};

