#include<bits/stdc++.h>
bool dfs(int node,int parent,vector<int>&visited,vector<int>adj[]){
    visited[node]=1;
    for(auto it:adj[node]){
        if(visited[it]==0){
         //   visited[it]=1; can do but not necessary
           if( dfs(it,node,visited,adj))  return true;
        }
        else if(visited[it]==1&&it!=parent)  return true;
        
    }
    return false;
    
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int a=edges[i][0];int b=edges[i][1];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int>visited(n+1,0);
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            if(dfs(i,-1,visited,adj)){
                return "Yes";
            }    
        }          
    }
    return "No";
}
