#include <iostream>
using namespace std;

//Level Order Print in BST
//Print Each Level
class node{
    public:
    int data;
    node* right;
    node* left;

    node(int d){
        data= d;
        right= NULL;
        left= NULL;
    }
};

node* insertBST(node* root, int d){
    if(root == NULL){
        root= new node(d);
        return root;
    }
    if(d< root->data){
        root->left= insertBST(root->left, d);
    }else{
        root->right= insertBST(root->right, d);
    }
    return root;
}


node* buildBST(int a[], int n){
    node* root= NULL;
    for(int i=0; i<n; ++i){
        root= insertBST(root, a[i]);
    }
    return root;
}

void print(node* root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<< root->data<<" ";
    print(root->right);
}

int height(node* root){
    if(root==NULL){
        return 0;
    }
    int h1= height(root->left);
    int h2= height(root->right);
    return max(h1, h2) + 1;
}

void printKthLevel(node* root, int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        //level reached
        cout<< root->data<< " ";
        return;
    }
    printKthLevel(root->left, k--);
    printKthLevel(root->right, k--);
    return;
}


void printAllLevels(node* root){
    int n= height(root);
    for(int i=1; i<=n; ++i){
        cout<< endl;
        printKthLevel(root, i);
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
    node* root= buildBST(a, n);
    print(root);
    cout<< endl;
    cout<< height(root);
    //cout<< endl;
    // printKthLevel(root, 1);
    // printKthLevel(root, 2);    
    // printKthLevel(root, 3);    
    // printKthLevel(root, 4);
    printAllLevels(root);
}
