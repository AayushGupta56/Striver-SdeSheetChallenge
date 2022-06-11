#include<bits/stdc++.h>
static bool comp(vector<int> j1,vector<int>j2){
     
    return  j1[1]>j2[1];
}

int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    sort(jobs.begin(),jobs.end(),comp);
    
    
    int n=jobs[0][0];
    for(int i=0;i<jobs.size();i++)
    {
        n=max(n,jobs[i][0]);
    }
    int arr[n+1];int ans=0;
    for(int i=0;i<=n;i++){arr[i]=-1;}
    
    for(int i=0;i<jobs.size();i++){
       for(int j=jobs[i][0];j>0;j--){
           if(arr[j]==-1){
               arr[j]=i;
               ans=ans+jobs[i][1];break;
           }
       }
    } 
   
       return ans;
   
}
