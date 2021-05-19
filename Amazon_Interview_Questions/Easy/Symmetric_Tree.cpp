/*

Problem Link: https://practice.geeksforgeeks.org/problems/symmetric-tree/1

*/

	bool isMirror(struct Node *root1, struct Node *root2){
    if(!root1 && !root2)
     return true;
     
    if(root1 && root2 && root1->data==root2->data){
        return (isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left));
    }
    return false;
}

// return true/false denoting whether the tree is Symmetric or not
bool isSymmetric(struct Node* root){
    return isMirror(root, root);
}
