/*

	Problem Link: https://leetcode.com/problems/n-ary-tree-level-order-traversal/

*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>v;
        if(!root)
            return v;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>curLevel;
            for(int i=0; i<size; i++){
                Node* temp = q.front();
                q.pop();
                curLevel.push_back(temp->val);
                for(auto j:temp->children)
                    q.push(j);
            }
            v.push_back(curLevel);
        }
        return v;
    }
};
