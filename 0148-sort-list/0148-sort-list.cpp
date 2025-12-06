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
    ListNode* sortList(ListNode* head) {
        if(head==NULL)return NULL;
        vector<int>arr;
        ListNode* temp=head;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* new_head=new ListNode(arr[0]);
        ListNode* t=new_head;
        for(int i=1;i<arr.size();i++)
        {
            ListNode* nn=new ListNode(arr[i]);
            t->next=nn;
            t=t->next;
        }
        return new_head;
    }
};