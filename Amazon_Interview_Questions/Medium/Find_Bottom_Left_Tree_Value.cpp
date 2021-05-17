/*

Problem Link: https://leetcode.com/problems/find-bottom-left-tree-value/

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
    int findBottomLeftValue(TreeNode* root) {
         vector<int>v;
       if(!root)
        return 0;
       queue<TreeNode*>q;
       q.push(root);
       while(!q.empty()){
           int n = q.size();
           for(int i=1; i<=n; i++){
               TreeNode *temp = q.front();
               q.pop();
               if(i==1)
                v.push_back(temp ->val);
                if(temp -> left)
                 q.push(temp -> left);
                if(temp -> right)
                 q.push(temp -> right);
           }
   }
   return v[v.size()-1];
    }
};
