#include<bits/stdc++.h>
vector<int> BFS(int v, vector<pair<int, int>> edges)
{
    // Write your code here
    vector<int>adj[v];vector<int>bfs;
    for(auto it:edges){
        adj[it.first].push_back(it.second);
        adj[it.second].push_back(it.first);
    }
    for(  int i=0;i<v;i++){
        sort(adj[i].begin(),adj[i].end());
    }
    int visited[v]={0};
    for(int i=0;i<v;i++){
        
        if(visited[i]==0){
            queue<int>q;
            q.push(i);
            visited[i]=1;
            
            while(!q.empty()){
                int node=q.front();
                q.pop();
                bfs.push_back(node);
                for(auto it:adj[node]){
                    if(visited[it]==0){
                       q.push(it);
                        visited[it]=1;
                    } 
                } 
            }   
        }
         
    }
        return bfs;
}
