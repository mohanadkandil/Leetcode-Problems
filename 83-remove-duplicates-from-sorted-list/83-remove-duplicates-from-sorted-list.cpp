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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmp = head;
       
        
        while(tmp && tmp->next) {
            if(tmp->val == tmp->next->val) {
                ListNode* delete_node = tmp->next;
                tmp->next = tmp->next->next;
                delete delete_node;
                continue;
            }
            tmp = tmp->next;
        }
        return head;
        
    }
};