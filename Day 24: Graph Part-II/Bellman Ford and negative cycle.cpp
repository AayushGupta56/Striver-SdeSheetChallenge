int bellmonFord(int n, int e, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
    vector<long long>dist(n+1,1000000000);dist[src]=0;
    for(int i=1;i<n;i++){
        for(auto it:edges){
            int u = it[0];
            int v = it[1];
            int d = it[2];
            if(dist[ u] != 1e9&&dist[u]+d<dist[v]){
      //dist[it[0]]!=1e9 is added because if we are not able to reach u till now from source so
      //how can we change distance for v as is we is negstive then infi +-5 will become less than
                //infi but we cant reach v from u through source
                dist[it[1]]=dist[it[0]]+it[2];
            }
        }
   }
        bool negativeCycle  = false;
      for(auto it : edges) {
            int u = it[0];
            int v = it[1];
            int d = it[2];
            if(dist[u] !=1e9 && dist[u]+d<dist[v]){
                negativeCycle = false;
               break;
            }
        }
    
    if(negativeCycle){
        return 1e9;
    }
    
    return dist[dest];
}
