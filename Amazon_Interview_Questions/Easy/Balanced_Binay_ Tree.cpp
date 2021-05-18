/*

Problem Link: https://leetcode.com/problems/balanced-binary-tree/

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
 
	bool f = true; //declared Globally
	bool height(TreeNode* root){
	    if(!root)
	     return 0;
	    int leftSubTree = height(root->left);
	    int rightSubTree = height(root->right);
	    if(abs(leftSubTree - rightSubTree) > 1)
	        f = false;
	    return max(leftSubTree, rightSubTree)+1;
	}
	
	class Solution {
	public:
	    bool isBalanced(TreeNode* root) {
	      f = true;
	      height(root);
	      return f;
	    }
	};
