    void solve(vector<int> &v,string &ans,int n,int k){
        if(n==1){
            
            string temp=to_string(v[0]);
        ans=ans+temp;
            return;
        }
        
        int total=1; 
        for(int i=n-1;i>=1;i--)total=total*i;
         int index=k/total;
        string temp=to_string(v[index]);
        ans=ans+temp;
        v.erase(v.begin()+index);
        solve(v,ans,n-1,k%total);
        
        
        
    }
string kthPermutation(int n, int k) {
        vector<int> v;
        for(int i=1;i<=n;i++)v.push_back(i); 
        string ans;
        solve(v,ans,n,k-1);
        return ans;
}
