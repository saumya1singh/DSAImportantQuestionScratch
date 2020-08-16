#include <iostream>
using namespace std;

//Build Binary TREE Sample 
//Stop when -1 is entered
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
    node* current= new node(data);
    current->left= buildTree();
    current->right= buildTree();
    return current;
}

void print(node* root){
    if(root==NULL){
        return;
    }
    cout<< root->data<<" ";
    print(root->left);
    print(root->right);
    return;
}

int main() {
    node* root= buildTree();
    print(root);
}
