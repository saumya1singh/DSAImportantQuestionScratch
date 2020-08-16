#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Build Binary Tree from given array

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};


void bfs(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<",";
            q.pop();

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
}

node* buildBinaryFromArray(int a[], int s, int e){
    if(s>e){
        return NULL;
    }
    int mid= (s+e)/2;
    node* root= new node(a[mid]);
    root->left= buildBinaryFromArray(a, s, mid-1);
    root->right= buildBinaryFromArray(a, mid+1, e);
    return root;
}

int main() {
    int a[]= {3, 4, 5, 1, 6, 7, 8};
    int n= sizeof(a)/ sizeof(int);
    node* root= buildBinaryFromArray(a, 0, n-1);
    bfs(root);
}
