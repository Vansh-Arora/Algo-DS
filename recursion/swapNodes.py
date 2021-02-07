# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        if(head == None or head.next == None):
            return head
        temp = ListNode()
        temp = head
        head = head.next # Head removed
        # insering node between 2 nodes
        temp.next = head.next
        head.next = temp
        
        # repeat for every 3rd node
        head.next.next = self.swapPairs(head.next.next)
        return head
        
