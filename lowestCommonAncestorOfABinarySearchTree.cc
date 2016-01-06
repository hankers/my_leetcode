// Source : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
// Author : hanker
// Date   : 2016-1-1

/********************************************************************************** 
* Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.
*
* According to the definition of LCA on Wikipedia: 
* “The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both 
* v and w as descendants (where we allow a node to be a descendant of itself).”
***********************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *result = NULL;

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    
        if ((root->val - p->val) * (root->val - q->val) <= 0) return root;
        TreeNode* node = (root->val > p->val && root->val > q->val) ? root->left:root->right;
        return lowestCommonAncestor(node, p, q);
    }
};

