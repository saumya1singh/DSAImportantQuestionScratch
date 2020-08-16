#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//TOtal Nodes in Binary Tree

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
}


void bfs(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f= q.front();
        
        if(f==NULL){
            //Shift to next line, pop NULL, if q is not empty push another NULL
            cout<< endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            //Print the front of queue, pop it then push it's children (left & right)
            cout<< f->data<<" ";
            q.pop();
            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
}

int count(node* root){
    if(root==NULL){
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}

int main() {
    node* root= buildTree();
    bfs(root);

    cout<< count(root);
}
