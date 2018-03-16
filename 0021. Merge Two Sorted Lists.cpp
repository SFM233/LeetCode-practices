/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode result;
    struct ListNode *start = &result;
    while(l1&&l2){
        if(l1->val <= l2->val){
            start->next = l1;
            l1 = l1->next;
        }
        else{
            start->next = l2;
            l2 = l2->next;
        }
        start = start->next;
    }
    if(l1 == NULL){
        start->next = l2;
    }
    else{
        start->next = l1;
    }
    return result.next;

}