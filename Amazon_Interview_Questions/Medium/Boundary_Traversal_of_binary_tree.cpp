/*

Problem Link: https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

*/


	void leaf(Node *root, vector<int>&v){
	    if(!root)
	     return;
	    leaf(root->left,v);
	    if(!root->left && !root->right)
	     v.push_back(root->data);
	    leaf(root->right,v);
	}
	
	void leftTree(Node *root, vector<int>&v){
	    if(!root)
	     return;
	    if(root->left){
	        v.push_back(root->data);
	        leftTree(root->left,v);
	    }
	    else if(root->right){
	        v.push_back(root->data);
	        leftTree(root->right,v);
	    }
	}
	
	void rightTree(Node *root, vector<int>&v){
	    if(!root)
	     return;
	    if(root->right){
	        rightTree(root->right,v);
	        v.push_back(root->data);
	    }
	    else if(root->left){
	        rightTree(root->left,v);
	        v.push_back(root->data);
	    }
	}
	
	
	
	class Solution {
	public:
	    vector <int> printBoundary(Node *root){
	        vector<int>v;
	        if(!root->left && !root->right){
	            v.push_back(root->data);
	            return v;
	        }
	        
	        v.push_back(root->data);
	        leftTree(root->left,v);
	        leaf(root,v);
	        rightTree(root->right,v);
	        return v;
	    }
	};
