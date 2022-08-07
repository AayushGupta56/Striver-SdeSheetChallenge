void dijkstra(vector<pair<int,int>>adj[],vector<int>&ans,int source){
                     //<dist,node>           
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    ans[source]=0;q.push({0,source});
    while(q.empty()==false){
        int node=q.top().second;
        int dist=ans[node];q.pop();
        for(auto it:adj[node]){
            if(dist+it.second<ans[it.first]){
                ans[it.first]=dist+it.second;
                q.push({ans[it.first],it.first});
            }
            
        }
        
        
    }
    
}
vector<int> dijkstra(vector<vector<int>> &vec, int v, int edges, int source) {
    // Write your code here.
    vector<pair<int,int>>adj[v];
    for(int i=0;i<vec.size();i++){
        int u=vec[i][0];int v=vec[i][1];int d=vec[i][2];
        adj[u].push_back({v,d});
         adj[v].push_back({u,d});
    }
    vector<int>ans(v);for(int i=0;i<v;i++)ans[i]=INT_MAX;
    dijkstra(adj,ans,source);
    return ans;
}
