# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        t1 = head
        if not head:
            return None
        if not head.next:
            return head
        t2 = head.next
        while t2.next!=None:
            t3 = t2.next
            t2.next = t1
            t1 = t2
            t2=t3
        t2.next=t1
        head.next=None
        return t2
        