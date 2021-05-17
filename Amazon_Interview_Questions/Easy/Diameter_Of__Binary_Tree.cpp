/*

Problem Link: https://leetcode.com/problems/diameter-of-binary-tree/

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

int ma;
class Solution {
    int func(TreeNode *root){
        if(!root)
         return 0;
        int x = func(root -> left);
        int y = func(root -> right);
        ma = max(ma, x+y+1);
        return (max(x,y)+1);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        ma = INT_MIN;
        int x = func(root);
        return ma-1;
    }
};
