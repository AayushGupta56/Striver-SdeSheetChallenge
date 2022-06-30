 
#include<bits/stdc++.h>
int solve(vector<int>&arr,int i,int last,int n,vector<vector<int>>&dp){
     if(i==n)return 0;
    if(dp[i][last+1]!=-1)return dp[i][last+1];
    int pick=-1e9;
    if(last==-1||arr[i]>arr[last])pick=arr[i]+ solve(arr,i+1,i,n,dp);
    int notpick=solve(arr,i+1,last,n,dp);
     
    return dp[i][last+1]=max(pick,notpick);
}
int maxIncreasingDumbbellsSum(vector<int> &arr, int n)
{
	// Write your code here
     vector<vector<int>>dp(n,vector<int>(n+1,-1));
   return  solve(arr,0,-1,n,dp);
}
