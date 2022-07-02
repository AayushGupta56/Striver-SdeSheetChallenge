#include<bits/stdc++.h>
void dfs(int node,int visited[],  vector<int>adj[],vector<int>&ans){
    ans.push_back(node);
    visited[node]=1;
    for(auto it:adj[node]){
        if(visited[it]==0){
            dfs(it,visited,adj,ans);
        }
    }
    
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<int>adj[V];vector<vector<int>>mainans;
    for(int i=0;i<E;i++){
        int a=edges[i][0];int b=edges[i][1];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int visited[V]={0};
    
    for(int i=0;i<V;i++){
        if(visited[i]==0){
            vector<int>ans;
            dfs(i,visited,adj,ans);    
            mainans.push_back(ans);
        }
        }
    return mainans;
}
