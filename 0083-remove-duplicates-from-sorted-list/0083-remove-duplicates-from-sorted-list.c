/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    // if(head == NULL)
    //     return NULL;
    struct ListNode *temp = head;
    // struct ListNode *prev = head;
    // temp = temp -> next;
    while(temp != NULL && temp -> next != NULL){
        if(temp -> val == temp -> next -> val){
            // prev -> next = temp -> next;
            struct ListNode *dupNode = temp -> next;
            temp -> next = temp -> next -> next;
            free(dupNode);
        }
        else{
            // prev = temp;
            temp = temp -> next;
        } 
    }
    return head;
}