

//https://leetcode.com/problems/diameter-of-binary-tree/

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
    
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left= height(root->left);
        int right= height(root->right);
        
        return max(left, right)+1;
    }
    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL){
            return 0;
        }
        
        int h1= height(root->left);
        int h2= height(root->right);
        
        int option1= h1+h2;
        int option2= diameterOfBinaryTree(root->left);
        int option3= diameterOfBinaryTree(root->right);
        
        return max(option1, max(option2, option3));
    }
};