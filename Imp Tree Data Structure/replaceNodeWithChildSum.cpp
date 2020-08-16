#include <iostream>
#include<queue>
using namespace std;

//REplace each node with sum of children, don't change the leaf nodes
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
}


int replaceWithSum(node* root){
    if(root==NULL){
        return 0;
    }
    int leftSum= replaceWithSum(root->left);
    int rightSum= replaceWithSum(root->right);
    int temp= root-> data;

    root-> data= leftSum+rightSum;
    return temp + root->data;
}


int main() {
    node* root= buildTree();
    bfs(root);
    replaceWithSum(root);
    cout<< endl;
    bfs(root);
}
