// Source : https://leetcode.com/problems/delete-node-in-a-linked-list/
// Author : hanker
// Date   : 2015-12-10

/********************************************************************************** 
* Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
*
* Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.
*
* Subscribe to see which companies asked this question
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
	// we can move the content of next node to this one, and delete the next one
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

