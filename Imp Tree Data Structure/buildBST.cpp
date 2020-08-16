#include <iostream>
#include <queue>
using namespace std;

//Let's Build a BST :)

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

node* buildBST(node* root, int d){
    if(root==NULL){
        return new node(d);
    }
    if(d<=root->data){
        root->left= buildBST(root->left, d);
    }else {
        root->right= buildBST(root->right, d);
    }
    return root;
}


void bfs(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* front= q.front();
        if(front==NULL){
            cout<< endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<< front->data<<" ";
            q.pop();

            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
    return; 
}


int main() {
    int n;
    cin>> n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>> a[i];
    }
    node* root= NULL;
    for(int i=0; i<n; ++i){
        root= buildBST(root, a[i]);
    }
    bfs(root);
}
