#include<bits/stdc++.h>
bool solve(int s,int parent,vector<int>&visited,vector<int>adj[]){
    queue<pair<int,int>>q;
    q.push({s,parent});
    visited[s]=1;
    while(q.empty()==false){
        int node=q.front().first;
        int parent=q.front().second; 
        q.pop();
        for(auto it:adj[node]){
            if(visited[it]==0){
                q.push({it,node});
                visited[it]=1;
            }
            else if( visited[it]==1&&it!=parent){
                return true;
            }
        }
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
            if(solve(i,-1,visited,adj)){
                return "Yes";
            }
        }
    }
    return "No";
}
