int bellmonFord(int n, int e, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
    vector<long long>dist(n+1,1000000000);dist[src]=0;
    for(int i=1;i<n;i++){
        for(auto it:edges){
            if(dist[it[0]] != 1e9&&dist[it[0]]+it[2]<dist[it[1]]){
      //dist[it[0]]!=1e9 is added because if we are not able to reach u till now from source so how can we change distance for v as is we is negstive then infi +-5 will become less than infi but we cant reach v from u through source
                dist[it[1]]=dist[it[0]]+it[2];
            }
        }
   }
    return dist[dest];
}
