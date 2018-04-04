/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    #definition
    struct ListNode* base = head;
    struct ListNode* pre = NULL;
    struct ListNode* next = NULL;
    #if the list is empty
    if(head == NULL) return NULL;
    
    while(base->next != NULL){
        next = base->next;
        base->next = pre;
        pre = base;
        base = next;
    }
    base->next = pre;
    return base;
}
