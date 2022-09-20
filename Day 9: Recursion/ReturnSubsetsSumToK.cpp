void solve(vector<int>&nums,vector<vector<int>>&ans,vector<int>&subset,int i,int sum,int target,int n){
        if(i==n){
            if(sum==target){
                ans.push_back(subset);
            }
            return;
            
        }
        
      
        //to take;
        subset.push_back(nums[i]);
        solve(nums,ans,subset,i+1,sum+nums[i],target,n);
               subset.pop_back();/////////////////////////////
        
        //not take
     
        solve(nums,ans,subset,i+1,sum,target,n);
        
    }
vector<vector<int>> findSubsetsThatSumToK(vector<int> nums, int n, int target)
{
       n=nums.size();
        vector<vector<int>>ans;
        vector<int>subset;
        solve(nums,ans,subset,0,0,target,n);
        return ans;
}
/////////////////////////////////////////////////////////
#include <bits/stdc++.h>
void solve(vector<int>&arr,vector<vector<int>>&ans,vector<int>&v,int B,int k){
    if(B==0){
        ans.push_back(v);
        return;
    }
    
    if(B<0) return;
    
    for(int i=k;i<arr.size();i++){
        v.push_back(arr[i]);
        solve(arr,ans,v,B-arr[i],i);
        v.pop_back();
    }
}
vector<vector<int>> combSum(vector<int>& ARR, int B)
{
	sort(ARR.begin(),ARR.end());
    vector<vector<int>>ans;
    vector<int>v;
    
    solve(ARR,ans,v,B,0);
    
    
    
    return ans;
}
