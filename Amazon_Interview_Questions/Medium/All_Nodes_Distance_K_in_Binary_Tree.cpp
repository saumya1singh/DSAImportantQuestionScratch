/*

Problem Link: https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/

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
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*>par_tr; //node -> parent
        unordered_map<TreeNode*,bool>vis;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){  //First BFS to get a track of parent nodes
            TreeNode* cur = q.front();
            q.pop();
            if(cur -> left){
                par_tr[cur->left] = cur;
                q.push(cur -> left);
            }
            if(cur -> right){
                par_tr[cur->right] = cur;
                q.push(cur -> right);
            }
        }
        q.push(target);
        vis[target] = true;
        int cur_lev = 0;
        while(!q.empty()){  //Second BFS to go upto k level from target node and using our hashing info
            int n = q.size();
            if(cur_lev++ == k)
                break;
            for(int i=0; i<n; i++){
                TreeNode* cur = q.front();
                q.pop();
                if(cur->left && !vis[cur->left]){
                    q.push(cur -> left);
                    vis[cur -> left]=true;
                }
                if(cur -> right && !vis[cur->right]){
                    q.push(cur -> right);
                    vis[cur->right]=true;
                }
                if(par_tr[cur] && !vis[par_tr[cur]]){
                    q.push(par_tr[cur]);
                    vis[par_tr[cur]] = true;
                }
            }
        }
        vector<int>res;
        while(!q.empty()){
            TreeNode* temp = q.front();
            res.push_back(temp->val);
            q.pop();
        }
        return res;
    }
};
