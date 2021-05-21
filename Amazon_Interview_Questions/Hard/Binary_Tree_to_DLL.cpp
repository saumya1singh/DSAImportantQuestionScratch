/*

Problem Link: https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1

*/


void ConnectingNodes(Node *root, Node* &head, Node* &prev, int &flag){
    if(!root) return;
    ConnectingNodes(root->left, head, prev, flag);
    if(flag == 0){   //check if Node is arriving for the first time.
        flag = 1;
        head = root;
        prev = root;
    }
    else{
        prev -> right = root;
        prev -> right -> left = prev;
        prev = prev -> right;
    }
    ConnectingNodes(root->right, head, prev, flag);
}

// This function should return head to the DLL
class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root){
       Node *head = NULL;
       Node *prev = NULL;
       int flag = 0; 
       ConnectingNodes(root, head, prev, flag);
       return head;
    }
};

