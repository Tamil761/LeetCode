/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverse(struct ListNode* head){
    struct ListNode *prev = NULL, *current = head, *next = NULL;
    while(current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
bool isPalindrome(struct ListNode* head) {
    if(head == NULL || head -> next == NULL)
        return true;
    struct ListNode *slow = head, *fast = head;
    while(fast && fast -> next){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    struct ListNode *secHalf = reverse(slow);
    struct ListNode *temp1 = head, *temp2 = secHalf;
    while(temp2 != NULL){
        if(temp1 -> val != temp2 -> val)
            return false;
        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
    }
    return true;
}