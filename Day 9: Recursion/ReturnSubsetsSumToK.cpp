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
