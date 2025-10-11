/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node;
struct ListNode* deleteDuplicates(struct ListNode* head) {
    node *temp=head;
    while(temp && temp->next)
    {
        if(temp->next->val==temp->val)
        {
            temp->next=temp->next->next;
            continue;
        }
        temp=temp->next;
    }
    return head;
}