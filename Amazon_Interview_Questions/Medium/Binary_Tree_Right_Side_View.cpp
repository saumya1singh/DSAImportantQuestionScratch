/*

Problem Link: https://leetcode.com/problems/binary-tree-right-side-view/

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
    vector<int> rightSideView(TreeNode* root) {
       vector<int>v;
       if(!root)
       return v;
       queue<TreeNode*>q;
       q.push(root);
       while(!q.empty()){
           int n = q.size();
           for(int i=1;i<=n;i++){
               TreeNode *temp = q.front();
               q.pop();
               if(i==n)
                v.push_back(temp ->val);
                if(temp -> left )
                 q.push(temp -> left);
                if(temp -> right)
                 q.push(temp -> right);
           }
       }
       return v;
    }
};
