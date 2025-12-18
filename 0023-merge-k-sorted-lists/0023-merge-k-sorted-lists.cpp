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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>arr;
        for(int i=0;i<lists.size();i++)
        {
            ListNode* temp=lists[i];
            while(temp!=NULL)
            {
                arr.push_back(temp->val);
                temp=temp->next;
            }
        }
        if(arr.size()==0)return NULL;
        sort(arr.begin(),arr.end());
        ListNode* newnode=new ListNode(arr[0]);
        ListNode* tem=newnode;
        for(int i=1;i<arr.size();i++)
        {
            ListNode* nn=new ListNode(arr[i]);
            tem->next=nn;
            tem=tem->next;
        }
        return newnode;
    }
};