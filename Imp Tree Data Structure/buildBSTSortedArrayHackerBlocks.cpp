#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* left;
	node* right;

	node(int d){
		data= d;
		left= NULL;
		right= NULL;
	}
};

node* buildBST(int a[], int start, int end){
	//Base
	if(start>end){
		return NULL;
	}
	int middle= start + (end-start)/2;
	node* root= new node(a[middle]);

	root->left= buildBST(a, start, middle-1);
	root->right= buildBST(a, middle+1, end);

	return root;
}

void printPre(node* root){
	if(root==NULL){
		return;
	}
	cout<< root->data<<" ";
	printPre(root->left);
	printPre(root->right);
	return;
}

int main() {
	int tc;
	cin>> tc;

	while(tc--){
		int n;
		cin>> n;
		int a[n];
		for(int i=0; i<n; ++i){
			cin>> a[i];
		}
		node* root= buildBST(a, 0, n-1);
		printPre(root);
		cout<< endl;
	}
	return 0;
}