// Source : https://leetcode.com/problems/invert-binary-tree/
// Author : hanker
// Date   : 2016-1-1

/********************************************************************************** 
* Invert a binary tree.
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
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
    
    void invert(TreeNode* root) {
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL) return;
        else {
            TreeNode* tmp = root->left;
            root->left = root->right;
            invert(root->left);
                
            root->right = tmp;
            invert(root->right);
        }
    }
};