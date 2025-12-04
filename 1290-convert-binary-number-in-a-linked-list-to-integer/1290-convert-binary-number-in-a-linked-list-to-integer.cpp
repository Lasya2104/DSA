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
    int getDecimalValue(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        temp=head;
        vector<int>arr(n);
        for(int i=n-1;i>=0 && temp!=NULL;i--)
        {
            arr[i]=temp->val;
            temp=temp->next;
        }
        int num=0;
        for(int i=0;i<arr.size();i++)
        {
            num+=(arr[i])*(1<<i);
        }
        return num;
    }
};