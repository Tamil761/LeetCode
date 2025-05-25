/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if(head == NULL || head -> next == NULL)
        return true;
    struct ListNode *slow = head, *fast = head;
    while(fast && fast -> next){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    struct ListNode *prev = NULL, *current = slow, *next = NULL;
    while(current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    while(prev != NULL){
        if(head -> val != prev -> val)
            return false;
        head = head -> next;
        prev = prev -> next;
    }
    return true;
}