/*

Problem Link: https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1

*/



unordered_map<string,int>m; //declaring globally

string convertingToString(Node *root){
    if(!root) return "$";
    string s ="";
    if(!root->left && !root->right){
        s = to_string(root->data);
        return s;
    }
        s = s + convertingToString(root->left);
        s = s + convertingToString(root->right);
        m[s]++;
        return s;
}

bool dupSub(Node *root){
   m.clear();
   convertingToString(root); //generating all root strings and storing it in map.
   for(auto i:m){
       if(i.second >= 2)
        return true;
   }
   return false;
}
