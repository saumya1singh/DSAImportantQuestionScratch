/*

Problem Link: https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1

*/


vector<int> diagonal(Node *root){
   queue<Node*>q;
   vector<int>v;
   if(!root)
    return v;
   q.push(root);
   while(!q.empty()){
       Node *temp = q.front();
       q.pop();
       while(temp){
       if(temp -> left) q.push(temp -> left);
       v.push_back(temp -> data);
       temp = temp -> right;
       }
   }
   return v;
}

