#include <iostream>
using namespace std;

//Build Binary Tree Recursively

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

node* buildTree(){
    int data;
    cin>> data;

    if(data==-1){
        return NULL;
    }

    node* root= new node(data);
    //build left
    root->left= buildTree();
    root->right= buildTree();
    return root;
}

//InOrder
void printIn(node* root){
    if(root==NULL){
        return;
    }

    printIn(root->left);
    cout<< root->data<< " ";
    printIn(root->right);
}

int main() {
    node* root= buildTree();
    printIn(root);
}
