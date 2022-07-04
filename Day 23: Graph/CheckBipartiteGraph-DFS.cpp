#include<bits/stdc++.h>
bool dfs(int node,vector<int>&visited,vector<int>adj[]){
    // if(visited[node]==-1)visited[node]=0;
    
      for(auto it:adj[node]){
          if(visited[it]==-1){
              visited[it]=1-visited[node];
              if(dfs(it,visited,adj)==false){return false;}
          }
          if(visited[it]!=-1){
              if(visited[it]==visited[node]){
                  return false;
              }
          }
      }
 
    return true;
    
    
    
    
}

bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
    int n=edges.size();
    vector<int>adj[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(edges[i][j]==1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    vector<int>visited(n,-1);
    for(int i=0;i<n;i++){
        if(visited[i]==-1){
           visited[i]=0;
            if(dfs(i,visited,adj)==false){
                return false;
            }
        }
        
    }
    return true;
    
    
}
