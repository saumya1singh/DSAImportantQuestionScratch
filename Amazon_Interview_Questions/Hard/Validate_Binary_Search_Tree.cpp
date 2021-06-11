/*

	Problem Link: https://leetcode.com/problems/validate-binary-search-tree/

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
    vector<long>v;
    void inorder(TreeNode* root){
        if(root->left)
        inorder(root->left);
        v.push_back(root->val);
        if(root->right)
        inorder(root->right);
    }
public:
    bool isValidBST(TreeNode* root) {
        if(root == NULL)
            return true;
        inorder(root);
        int n = v.size();
        for(int i=0; i<n-1; i++){
            if((v[i+1]-v[i])<=0)
                return false;
        }
        return true;
    }
};
