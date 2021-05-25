/*

Problem Link: https://leetcode.com/problems/increasing-order-search-tree/

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
    TreeNode *curr = NULL;
public:
    TreeNode* increasingBST(TreeNode* root) {
      if(!root)
          return NULL;
        
        TreeNode *res = new TreeNode(0);
        curr = res;
        inorder(root);
        return res->right;
    }
    void inorder(TreeNode*root){
        if(root == NULL)
            return;
        inorder(root->left);
        root->left = NULL;
        curr -> right = root;
        curr = root;
        inorder(root->right);
    }
};
