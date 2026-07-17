# Definition for singly-linked list.

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        dummy = ListNode()
        pointer = dummy
        arr = []
        for node in lists:
            while node:
                arr.append(node.val)
                node = node.next
        arr.sort()

        for a in arr:
            pointer.next = ListNode(a)
            pointer = pointer.next 
        return dummy.next

        
        