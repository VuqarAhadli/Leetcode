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
#include <iso646.h>

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if ( head == nullptr or head->next == nullptr ) return head;

        ListNode* current = head;
        ListNode* nextNode = head->next;

        head->next = swapPairs(nextNode->next);
        nextNode->next = head;

        
        return nextNode;
    }
};