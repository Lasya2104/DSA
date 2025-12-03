/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
int count(ListNode* head)
{
    ListNode* temp=head;
    int c=0;
    while(temp)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=count(head); //5
        int req=length-n; //3
        if(req==0)
        {
            ListNode* del=head;
            head=head->next;
            delete del;
            return head;
        }
        ListNode* temp=head;
        for(int i=1;i<req;i++) //
        {
            temp=temp->next;
        }
        ListNode* nn=temp->next;
        temp->next=nn->next;
        delete nn;
        return head;
    }
};