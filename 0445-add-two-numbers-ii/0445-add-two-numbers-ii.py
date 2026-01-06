# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        s1=''
        while l1:
            s1+=str(l1.val)
            l1=l1.next
        s2=''
        while l2:
            s2+=str(l2.val)
            l2=l2.next
        r=str(int(s1)+int(s2))
        dummy=ListNode(0)
        curr=dummy
        for x in r:
            curr.next=ListNode(int(x))
            curr=curr.next
        return dummy.next;
        