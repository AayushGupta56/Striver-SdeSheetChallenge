#include<bits/stdc++.h>
  void solve(vector<int>&nums,vector<vector<int>>&ans,vector<int>&subset,int i,int sum,int target,int n){
        if(i==n){
            if(sum==target){
                ans.push_back(subset);
            }
            return;
            
        }
        
        if(sum+nums[i]<=target){
        //to take;
        subset.push_back(nums[i]);
         
        solve(nums,ans,subset,i+1,sum+nums[i],target,n);
                      subset.pop_back();/////////////////// it should be written just after i+1 line
            //because we need empty vector subset for not taking
        }
        //not take
         while(i+1<n&&nums[i+1]==nums[i])i++;//this should not be written
        //in i+1 case baecause we need 1 ,1 see in sample test case
        //agar kisi element ko nahi lena hai to pura mat lo
     
        solve(nums,ans,subset,i+1,sum,target,n);
        
    }
vector<vector<int>> combinationSum2(vector<int> &nums, int n, int target)
{
   n=nums.size();
        vector<vector<int>>ans;
        vector<int>subset;
        sort(nums.begin(),nums.end());
        solve(nums,ans,subset,0,0,target,n);
        return ans;
}
