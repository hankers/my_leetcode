// Source : https://leetcode.com/problems/reverse-linked-list/
// Author : hanker
// Date   : 2016-1-5

/********************************************************************************** 
* Reverse a singly linked list.
***********************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* preNode = NULL;
        ListNode* curNode = NULL;
        while (head != NULL) {
            preNode = curNode;
            curNode = head;
            head = head->next;
            curNode->next = preNode;
        }
        return curNode;
    }
};