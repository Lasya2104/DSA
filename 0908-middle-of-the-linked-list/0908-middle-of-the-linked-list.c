/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int cnt=0;
    struct ListNode *temp=head;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    int n=cnt/2;
    for(int i=0;i<n;i++)
    {
        head=head->next;
    }
    return head;
}