 bool checkPalindrome(string s,int start,int end){
    
        while(end>=start){
            if(s[start++]!=s[end--])return false;
        }
        return true;
    }
    void solve(string s,vector<vector<string>>&ans,vector<string>&subset,int index,int n){
       if(index==n){
           ans.push_back(subset);
           return ;
       }
        
        for(int i=index;i<n;i++){
            if(checkPalindrome(s,index,i)){
                string temp=s.substr(index,i-index+1);
                subset.push_back(temp);
                
                solve(s,ans,subset,i+1,n);
                subset.pop_back();
                
            }
        }
        
        
    }
vector<vector<string>> partition(string &s) 
{
 int n=s.size();
        vector<string>subset;
        vector<vector<string>>ans;
        solve(s,ans,subset,0,n);
        return ans;
}
