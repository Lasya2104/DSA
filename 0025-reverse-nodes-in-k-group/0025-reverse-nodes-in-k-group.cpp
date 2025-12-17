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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)return NULL;
        ListNode* temp=head;
        vector<int>arr;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<arr.size();i+=k)
        {
            if(i+k<=arr.size())
            {
                reverse(arr.begin()+i,arr.begin()+i+k);
            }
            // else
            // {
            //     reverse(arr.begin()+i,arr.end());
            // }
        }
        if(arr.size()==0)return NULL;
        ListNode* newnode=new ListNode(arr[0]);
        ListNode* tempnode=newnode;
        for(int i=1;i<arr.size();i++)
        {
            ListNode* nn=new ListNode(arr[i]);
            tempnode->next=nn;
            tempnode=tempnode->next;
        }
        return newnode;
    }
};