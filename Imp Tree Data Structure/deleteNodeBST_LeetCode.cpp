
Link LeetCode- https://leetcode.com/problems/delete-node-in-a-bst/submissions/


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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        if(key<root->val){
            root->left= deleteNode(root->left, key);    
        }
        else if(key>root->val) {
            root->right= deleteNode(root->right, key);
        }
        else if(key==root->val){
            //Found the node to be deletd
            //IMP, 3 cases
            //Case 1- Node to be deleted has 0 child 
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            //Case 2- Node to be deleted has 1 child 
            if(root->left!=NULL && root->right==NULL){
                TreeNode* temp= root->left;
                delete root;
                return temp;
            }
            if(root->right!=NULL && root->left==NULL){
                TreeNode* temp= root->right;
                delete root;
                return temp;
            }
            //Case 3- Node to be deleted has 2 child
            TreeNode* replace= root->right;
            while(replace->left!=NULL){
                replace = replace->left;
            }
            root->val= replace->val;
            root->right= deleteNode(root->right, replace->val);
            return root;
            
        }
        return root;
    }
};