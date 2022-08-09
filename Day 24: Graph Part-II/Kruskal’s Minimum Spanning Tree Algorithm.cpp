#include<bits/stdc++.h>
bool comp(vector<int>a,vector<int>b){
    return a[2]<b[2];
}
void make(int n,int parent[]  , int size []){
    parent[n]=n;
    size[n]=n;
}
int find(int n,int parent[]  , int size []){
    if(parent[n]==n)return n;
    return  parent[n]=find(parent[n],parent,size);
  
}
void Union(int a,int b, int parent[] , int size []){
     a=find(a,parent,size); b=find(b,parent,size);
    if(a!=b){
        if(size[a]>=size[b]){
            size[b]+=size[a];
            parent[a]=parent[b];
        }
        else {
             size[a]+=size[b];
            parent[b]=parent[a];
        }
    }
}

int kruskalMST(int n, int m, vector<vector<int>> &graph) {
	// Write your code here.
    int parent[n+1];
   int size [n+1];
    
    for(int i=0;i<=n;i++){
       make(i,parent,size); 
    } 
    sort(graph.begin(),graph.end(),comp);
    int ans=0;
    for(auto it:graph){
 
        if(find(it[0],parent,size)==find(it[1],parent,size))continue;
        if(find(it[0],parent,size)!=find(it[1],parent,size)){
            Union(it[0],it[1],parent,size);
            ans+=it[2];
            
           
            
        }
        
    }
   return ans;
}
