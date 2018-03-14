/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// Pretty simple

struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *start = head;
    while(start && start->next){
        if (start->val == start->next->val){
            start->next = start->next->next;
        }
        else start = start->next;
    }
    return head;
}