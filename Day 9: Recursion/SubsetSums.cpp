 void solve(vector<int>&num,vector<int> &ans,int n,int i,int sum){
    if(i==n){
        ans.push_back(sum);
        return ;
    }
    
    solve(num,ans,n,i+1,sum+num[i]);
    solve(num,ans,n,i+1,sum);
    
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int>ans;int n=num.size();
    solve(num,ans,n,0,0);
    sort(ans.begin(),ans.end());
    return ans;
}
