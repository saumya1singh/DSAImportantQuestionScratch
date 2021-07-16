/*

Problem Link: https://leetcode.com/problems/clone-graph/

*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    void dfs(Node* curr, Node* node, vector<Node*>&visited){
        visited[node->val] = node;
        for(auto ele:curr->neighbors){
            if(visited[ele->val] == NULL){
                Node *newNode = new Node(ele->val);
                (node->neighbors).push_back(newNode);
                dfs(ele,newNode,visited);
            }
            else
                (node->neighbors).push_back(visited[ele->val]);
        }
    }
    
public:
    Node* cloneGraph(Node* node) {
       if(node == NULL)
           return NULL;
        vector<Node*>visited(1000,NULL);
        Node *copy = new Node(node->val); //cloning the first Node
        visited[node->val] = copy; //marked visited
        //Iterate for all neighbours
        for(auto curr:node->neighbors){
            if(visited[curr->val] == NULL){
                Node *newNode = new Node(curr->val);
                (copy->neighbors).push_back(newNode);
                dfs(curr,newNode,visited);
            }
            else
                (copy->neighbors).push_back(visited[curr->val]);
        }    
        return copy;   
    }
};
