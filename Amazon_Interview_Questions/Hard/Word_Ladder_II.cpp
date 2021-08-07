/*

	Problem Link: https://leetcode.com/problems/word-ladder-ii/

*/

class Solution {
public:
vector<vector<string>> res;

void dfs(string src,string &dest,unordered_map<string,vector<string>> &adj,vector<string> &path)
{
    path.push_back(src);
    if(src==dest)
    {
        res.push_back(path);
        path.pop_back();
        return;            
    }
    
    for(string nbr:adj[src])
        dfs(nbr,dest,adj,path);
    
    path.pop_back();
}

vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) 
{
    unordered_set<string> s,sack;
    for(int i=0;i<wordList.size();i++)
    {
        s.insert(wordList[i]);
        sack.insert(wordList[i]);
    }
    if(s.find(endWord)==s.end())
        return {};
    
    queue<string> q;
    unordered_map<string,vector<string>> child;
    unordered_map<string,int> dist;
    
    dist[beginWord]=0;
    q.push(beginWord);
    int ans=-1;
    while(!q.empty())
    {
        string node=q.front();
        q.pop();
        int f=0;
        for(int i=0;i<node.length();i++)
        {
            string temp=node;
            for(char c='a';c<='z';c++)
            {
                temp[i]=c;
                if(node==temp)
                    continue;
                if(temp==endWord)
                    ans=dist[node]+1;
                if(s.find(temp)!=s.end())
                {
                    if(dist.count(temp)==0)
                    {
                        dist[temp]=dist[node]+1;
                        q.push(temp);
                        child[node].push_back(temp);
                    }else if(dist[temp]==dist[node]+1)
                        child[node].push_back(temp);
                }
            }
        }
    }
    if(ans==-1)
        return {};
    
    vector<string> path;
    dfs(beginWord,endWord,child,path);
    return res;        
}
};
