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
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode* temp=head;
        vector<int>arr;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>res;
        for(int i=0;i<arr.size();i++)
        {
            if(i%2==0)
            {
                res.push_back(arr[i]);
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            if(i%2!=0)
            {
                res.push_back(arr[i]);
            }
        }
        ListNode* nn=new ListNode(res[0]);
        ListNode* t=nn;
        for(int i=1;i<res.size();i++)
        {
            ListNode* newn=new ListNode(res[i]);
            t->next=newn;
            t=newn;
        }
        return nn;
    }
};