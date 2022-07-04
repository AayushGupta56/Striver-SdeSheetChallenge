#include<bits/stdc++.h>
bool bfs(int node,vector<int>&color,vector<int>adj[]){
    queue<int>q;
    q.push(node);
    color[node]=1;
    
    while(q.empty()==false){
        int node=q.front();
        q.pop();
        for(auto it:adj[node]){
            if(color[it]==-1){
                q.push(it);
                if(color[node]==1)color[it]=0;
                else if(color[node]==0)color[it]=1;
            }
            else if(color[it]!=-1){
                if(color[node]==color[it])return false;
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
            if(bfs(i,visited,adj)==false){
                return false;
            }
        }
        
    }
    return true;
    
    
}
