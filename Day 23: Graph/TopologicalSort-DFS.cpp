#include <bits/stdc++.h>
void dfs(int node,vector<int>&visited,vector<int>adj[],vector<int>&ans){
    visited[node]=1;
    for(auto it:adj[node]){
        if(visited[it]==0){
           dfs(it,visited,adj,ans);
        }
        //don't push_back here because all nodes should be after main node
        
    }
    ans.push_back(node);
    return;
    
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code heree
    vector<int>adj[v+1];
    for(auto it:edges){
        int u=it[0];int v=it[1];
        adj[u].push_back(v);
    }  
    vector<int>visited(v,0);vector<int>ans;
    for(int i=0;i<v;i++){
        if(visited[i]==0){
            dfs(i,visited,adj,ans);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
