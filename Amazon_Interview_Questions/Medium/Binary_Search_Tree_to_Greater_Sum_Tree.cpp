/*

	Problem Link: https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/
	
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 
class Solution {
    int sum=0;
public:
    TreeNode* bstToGst(TreeNode* root) {
        if(root==NULL)
            return NULL;
        bstToGst(root->right);
        //root
        sum += root ->val;
        root->val = sum;
        
        bstToGst(root->left);
        
        return root;
    }    
};
