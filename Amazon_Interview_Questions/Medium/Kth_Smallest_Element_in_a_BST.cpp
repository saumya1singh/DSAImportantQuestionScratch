/*

Problem Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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
public:
    vector<int>v;
    void order(TreeNode *root){
        if(!root)
            return;
        if(root->left!=NULL)
            order(root->left);
        v.push_back(root->val);
        if(root->right!=NULL);
            order(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(!root)
            return NULL;
        order(root);
        return v[k-1];
    }
};
