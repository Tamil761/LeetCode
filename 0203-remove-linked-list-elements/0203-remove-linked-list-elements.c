/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    while(head != NULL && head -> val == val){
        struct ListNode *valNode = head;
        head = head -> next;
        free(valNode);
    }
    struct ListNode *temp = head, *prev = head;
    while(temp != NULL){
        if(temp -> val == val){
            prev -> next = temp -> next;
            struct ListNode *valNode = temp;
            temp = temp -> next;
            free(valNode);
        }
        else{
        prev = temp;
        temp = temp -> next;
        }
    }
    return head;
}