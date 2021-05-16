/*

Problem Link: https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

*/


class Solution
{
    public:
    vector<int> topView(Node *root){
      map<int,int>m;
      vector<int>v;
      queue<pair<Node*, int>>q;
      if(!root)
      return v; 
      q.push({root,0});
      while(!q.empty()){
          Node *t = q.front().first;
          int h = q.front().second;
          q.pop();
          if(!m[h])
            m[h] = t -> data;
          if(t->left)
           q.push({t->left,h-1});
          if(t->right)
           q.push({t->right,h+1});
      }
      for(auto i:m){
          v.push_back(i.second);
      }
      return v;
    }
};
