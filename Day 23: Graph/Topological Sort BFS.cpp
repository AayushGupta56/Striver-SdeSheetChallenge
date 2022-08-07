#include <bits/stdc++.h>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    //u->v=>u v
    vector<int>adj[v];
       for(int i=0;i<e;i++){
        adj[edges[i][0]].push_back(edges[i][1]);
    }
    vector<int> indegree(v,0); 
    for(int i=0;i<v;i++ ){
    for(auto it:adj[i]){
       indegree[it]++;
    }
       }
   queue<int>q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){q.push(i);}
    }
     vector<int>ans;
      while(q.empty()==0){
        int node=q.front();q.pop();ans.push_back(node);
          for(auto it:adj[node]){
              indegree[it]--;
              if(indegree[it]==0)q.push(it);
          }
    }
     return ans;
}
