#include<bits/stdc++.h>
 
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    vector<int>adj[n+1];
    for(auto it:edges){
        adj[it.first].push_back(it.second);
    }
     
    int indegree[n+1]={0};
    for(int i=1;i<=n;i++ ){
    for(auto it:adj[i]){
       indegree[it]++;
    }
       }
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(indegree[i]==0)q.push(i);
    }
    int count=0;
          while(q.empty()==0){
        int node=q.front();q.pop(); count++;
          for(auto it:adj[node]){
              indegree[it]--;
              if(indegree[it]==0)q.push(it);
          }
    }
    if(count==n)return 0;//no cycle
    else return 1;//cycle present
        
} 
