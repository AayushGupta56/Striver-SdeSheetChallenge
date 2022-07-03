#include<bits/stdc++.h>
bool dfs(int node,int n,vector<int>&visited,vector<int>&visited2,vector<int>adj[]){
        
    visited[node]=1;
    visited2[node]=1;
    for(auto it:adj[node]){
        if(visited[it]==0){
            if(dfs(it,n,visited,visited2,adj)){
                return true;
            }
        }
        else if(visited2[it]==1){return true;}
        
    }
    visited2[node]=0;
    return false;
    
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    vector<int>adj[n+1];
    for(auto it:edges){
        adj[it.first].push_back(it.second);
    }
     
    vector<int>visited(n+1,0);vector<int>visited2(n+1,0);
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
           if( dfs(i,n, visited,visited2,adj)){
               return 1;
           }
            
        }
        
    }
    return 0;
} 
