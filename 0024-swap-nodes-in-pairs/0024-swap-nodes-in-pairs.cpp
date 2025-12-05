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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)return NULL;
        vector<int>arr;
        ListNode* temp=head;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<arr.size()-1;i+=2)
        {
            swap(arr[i],arr[i+1]);
        }
        ListNode* head_new=new ListNode(arr[0]);
        ListNode* temp_new=head_new;
        for(int i=1;i<arr.size();i++)
        {
            temp_new->next=new ListNode(arr[i]);
            temp_new=temp_new->next;
        }
        return head_new;
    }
};