# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverse(self,head: Optional[ListNode]) -> Optional[ListNode]:
        previous = None
        current = head
        while current:
            nexty = current.next
            current.next = previous
            previous = current
            current = nexty
        return previous, head

    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:

        pointer = ListNode()
        pointer.next = head
        

        prev = pointer
        
        while True:

            curr = prev
            for _ in range(k):
                curr = curr.next
                if not curr:
                    return pointer.next
            
            start = prev.next
            nextg = curr.next

            curr.next = None

            ghead, gtail = self.reverse(start)

            prev.next = ghead
            gtail.next = nextg
            prev = gtail