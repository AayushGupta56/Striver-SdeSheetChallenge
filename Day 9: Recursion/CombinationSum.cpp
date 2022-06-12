class Solution {
public:
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
        solve(nums,ans,subset,i,sum+nums[i],target,n);
               subset.pop_back();/////////////////////////////////////////////////////////////////////////////
        }
        //not take
     
        solve(nums,ans,subset,i+1,sum,target,n);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>subset;
        solve(nums,ans,subset,0,0,target,n);
        return ans;
    }
};
