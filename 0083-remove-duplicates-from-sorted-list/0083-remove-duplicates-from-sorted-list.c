/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL)
        return NULL;
    struct ListNode *temp = head, *prev = head;
    temp = temp -> next;
    while(temp != NULL){
        if(temp -> val == prev -> val){
            prev -> next = temp -> next;
            struct ListNode *dupNode = temp;
            temp = temp -> next;
            free(dupNode);
        }
        else{
            prev = temp;
            temp = temp -> next;
        } 
    }
    return head;
}