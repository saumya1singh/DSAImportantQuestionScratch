/*

	Problem Link: https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
	
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
    TreeNode* res;
    TreeNode* tgt;
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        tgt = target;
        inorder(original,cloned);
        return res;
    }
    void inorder(TreeNode* orig, TreeNode* cloned){
        if(orig != NULL){
            //traversal  --> InOrder( L R root)
            inorder(orig->left,cloned->left);
            if(orig == tgt)
                res=cloned;
            inorder(orig -> right, cloned->right);
        }
    }
};
