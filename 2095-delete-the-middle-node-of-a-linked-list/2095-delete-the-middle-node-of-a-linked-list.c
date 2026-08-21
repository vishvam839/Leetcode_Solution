/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {

    if (head->next == NULL)
    {
        return NULL;
    }

    int count = 0;
    struct ListNode* temp = head;

    while (temp != NULL) 
    {
        count++;
        temp = temp->next;
    }

    int mid = count / 2;

    temp = head;

    for (int i = 0; i < mid - 1; i++) {
        temp = temp->next;
    }

    temp->next = temp->next->next;

    return head;
}