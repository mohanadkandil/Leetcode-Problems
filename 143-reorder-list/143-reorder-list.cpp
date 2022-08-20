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
    
    ListNode* getMid(ListNode* head){
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != nullptr and fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode *prev = NULL;
        ListNode *nxt = NULL;
        while (curr != nullptr) {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    
    void reorderList(ListNode* head) {
        if (head == nullptr or head->next == nullptr) return;
        ListNode* head1 = head;
        ListNode* mid = getMid(head);
        ListNode* head2 = reverseList(mid);
        while (head1 != nullptr and head2 != nullptr) {
            ListNode* tmp = head1->next;
            head1->next = head2;
            head1 = tmp;
            
            tmp = head2->next;
            head2->next = head1;
            head2 = tmp;

        }
        if (head1 != NULL) head1->next = NULL;
        
        
        
    }
};