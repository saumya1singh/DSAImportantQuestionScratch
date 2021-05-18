/*

Problem Link: https://practice.geeksforgeeks.org/problems/sum-tree/1#

*/
	
	bool f=true; //declared globally
	int SumOfNode(Node *root){
	    if(!root)
	     return 0;
	    if(!root) return 0;
	    if(!root->left && !root->right) return root->data;
	    if(f==false)
	     return false;
	    int sumOfLeftSubTree = SumOfNode(root->left);
	    int sumOfRightSubTree = SumOfNode(root->right);
	    if(sumOfLeftSubTree + sumOfRightSubTree != root->data) f=false;   //if not equal 
	    return sumOfLeftSubTree + sumOfRightSubTree +root->data;
	}
	
	class Solution{
	    public:
	    bool isSumTree(Node* root){
	        f = true;
	        SumOfNode(root);
	        return f;
	    }
	};

