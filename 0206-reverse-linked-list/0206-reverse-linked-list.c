/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node;
struct ListNode* reverseList(struct ListNode* head) {
    node *prev=NULL,*next;
    while(head)
    {
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}