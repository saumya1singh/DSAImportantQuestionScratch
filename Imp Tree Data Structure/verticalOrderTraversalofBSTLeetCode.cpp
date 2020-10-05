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
    void verticalTraversal(TreeNode* root) {
        vector<int> ans;
        map<int, vector<int>> m;
        int d=0;
        verticalTraversal(root, d, m);
        for(auto itr= m.begin(); itr!=m.end(); ++itr){
            cout<< itr->second<<" ";
        }
    }
    
    void verticalTraversal(TreeNode* root, int d, map<int, vector<int>>& m){
        if(root==NULL){
            return;
        }
        m[d].push_back(root->val);
        verticalTraversal(root->left, d-1, m);
        verticalTraversal(root->right, d+1, m);
        return ;
    }
    
};