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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL)return NULL;
        ListNode* temp=head;
        vector<int>arr;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        if(n==0)return NULL;
        swap(arr[k-1],arr[n-k]);
        ListNode* newnode=new ListNode(arr[0]);
        ListNode* tem=newnode;
        for(int i=1;i<arr.size();i++)
        {
            ListNode* nn=new ListNode(arr[i]);
            tem->next=nn;
            tem=nn;
        }
        return newnode;
    }
};