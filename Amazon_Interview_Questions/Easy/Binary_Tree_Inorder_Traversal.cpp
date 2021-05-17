/*

Problem Link: https://leetcode.com/problems/binary-tree-inorder-traversal/

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
void inorder(TreeNode *root, vector<int>&v){
    if(root == nullptr)
        return;
    inorder(root->left, v);
    v.push_back(root->val);
    inorder(root->right,v);
}

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        return v;        
    }
};
