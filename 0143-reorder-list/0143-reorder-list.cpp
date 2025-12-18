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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)return;
        ListNode* temp=head;
        vector<int>arr;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int l=0,r=arr.size()-1;
        vector<int>res;
        while(1<=r)
        {
            if(l==r)
            {
                res.push_back(arr[l]);
            }
            else
            {
                res.push_back(arr[l]);
                res.push_back(arr[r]);
            }
            l++;
            r--;
        }
        temp=head;
        int i=0;
        while(temp)
        {
            temp->val=res[i++];
            temp=temp->next;
        }
    }
};