/*

Problem Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

*/

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
       if(!root)
       return NULL;
       if(root->val==n1->val || root->val==n2->val)
        return root;
       TreeNode *l = lowestCommonAncestor(root->left,n1,n2);
       TreeNode *r = lowestCommonAncestor(root->right,n1,n2);
       if(l && r)
        return root;
       if(l) 
        return l;
       else
        return r;
    }
};
