/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode *temp = head;
    int l = left;
    while(l - 1){
        temp = temp -> next;
        l--;
    }
    struct ListNode *prev = NULL, *current = temp, *next = NULL;
    int count = right - left + 1;
    while(count--){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    if (left == 1) {
        head->next = current;
        return prev;
    } else {
        struct ListNode *before = head;
        int i = 1;
        while (i < left - 1) {
            before = before->next;
            i++;
        }
        before->next->next = current;
        before->next = prev;
    }
    return head;
}