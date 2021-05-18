/*

Problem Link: https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1

*/

	
	int Sum(Node *root){
	    if(!root)
	     return 0;
	    int leftSubTree = Sum(root->left);
	    int rightSubTree = Sum(root->right);
	    int x = root->data;
	    root-> data = leftSubTree + rightSubTree;
	    return (leftSubTree + rightSubTree + x);
	}
	
	class Solution {
	  public:
	    void toSumTree(Node *root){
	       Sum(root);
	    }
	};
