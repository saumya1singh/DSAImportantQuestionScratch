/*

Problem Link: https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

*/

	
class Solution 
{
    public:
    vector<int>v; //declared globally 
    
    void DFS(int n, vector<int>&vis, vector<int>adj[]){
        vis[n] = 1;
        v.push_back(n);
        for(auto i:adj[n]){
            if(!vis[i]){
                DFS(i, vis, adj);
            }
        }
    }
    
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	   v.clear();
	   vector<int>vis(V,0);
	   DFS(0,vis,adj);
	   return v;
	}
};
