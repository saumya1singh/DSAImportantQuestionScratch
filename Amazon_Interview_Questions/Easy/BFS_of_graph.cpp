/*

Problem Link: https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

*/

	class Solution{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int v, vector<int> adj[]){
	    vector<int>t;
	    bool vis[v] = {false};
	    queue<int>q;
	    q.push(0);
	    vis[q.front()] = true;
	    while(!q.empty()){
	        for(int i=0; i< adj[q.front()].size(); i++){
	            if(!vis[adj[q.front()][i]]){
	                q.push(adj[q.front()][i]);
	                vis[adj[q.front()][i]] = true;
	            }
	        }
	        t.push_back(q.front());
	        q.pop();
	    }
	    return t;
	}
};


