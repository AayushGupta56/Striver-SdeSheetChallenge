#include<bits/stdc++.h> 
void solve(vector<int>&nums,vector<vector<int>>&ans,int i,int n,vector<int>&subset){
        if(i==n){
            ans.push_back(subset);
            return;
        }
       //take 
     subset.push_back(nums[i]);
    solve(nums,ans,i+1,n,subset);
  //not take
    subset.pop_back();
    while(i+1<nums.size()&&nums[i+1]==nums[i])i++;
    solve(nums,ans,i+1,n,subset);
        
    }

vector<vector<int>> uniqueSubsets(int n, vector<int> &nums)
{
     vector<vector<int>>ans;
        vector<int>subset;
       
        sort(nums.begin(),nums.end());
        solve(nums,ans,0,n,subset);
       sort(ans.begin(),ans.end());
        return ans;
}
