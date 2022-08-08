#include<bits/stdc++.h>
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &graph)
{
    // Write your code here.
    vector<pair<int,int>>adj[n+1];
    for(int i=0;i<graph.size();i++){
  adj[graph[i].first.first].push_back({graph[i].first.second,graph[i].second});
    adj[graph[i].first.second].push_back({graph[i].first.first,graph[i].second});     
    }
    int visited[n+1]={0};
   vector<int> parent(n+1, -1);
    vector<int>weight(n+1,INT_MAX);
 priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >q;
    q.push({0,1});
    parent[1]=-1;weight[1]=0;
    
    // Run the loop till all the nodes have been visited
    // because in the brute code we checked for mstSet[node] == false while computing the minimum
    // but here we simply take the minimal from the priority queue, so a lot of times a node might be taken twice
    // hence its better to keep running till all the nodes have been taken. 
    // try the following case: 
    // 6 7 
    // 0 1 5 
    // 0 2 10 
    // 0 3 100 
    // 1 3 50 
    // 1 4 200
    // 3 4 250
    // 4 5 50  
    while(!q.empty()){
        int node=q.top().second;
        q.pop();
        visited[node]=1;
        for(auto it:adj[node]){
            int v=it.first;int wt=it.second;
            if(visited[v]==0&&wt<weight[v]){
                q.push({wt,v});
                parent[v]=node;
                weight[v]=wt;
            }
        }
        
    }
    vector<pair<pair<int, int>, int>>ans;
    for(int i=2;i<=n;i++){
         ans.push_back({{parent[i],i},weight[i]});
         ///it is like parent then node if want other than reverse
    }
    return ans;
}
