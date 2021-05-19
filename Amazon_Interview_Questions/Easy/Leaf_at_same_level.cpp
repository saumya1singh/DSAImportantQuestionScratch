/*

Problem Link: https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1

*/

bool ans;  //declared globally
void leafAtSameNode(Node *root, int height, int &mark){
    if(!root) return;
    if(!ans) return;
     if(!root->left && !root->right){
         if(mark == -1){
             mark = height;
         }
         else if(height != mark){
             ans = false;
         }
        return;
       }
       leafAtSameNode(root->left, height+1, mark);
       leafAtSameNode(root->right, height+1, mark);
    }

class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root){
      int mark = -1;  //if leaf of tree reached for the first time
      int height = 0;
      ans = true;
      leafAtSameNode(root, height, mark);
      return ans;
    }
};
