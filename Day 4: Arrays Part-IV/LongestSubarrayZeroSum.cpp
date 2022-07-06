#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
int n=arr.size();
  unordered_map<int ,int> m;
       m[0]=0;
       int  temp=0;int ans=0; 
        for(int i=0;i<n;i++){
        temp=temp+arr[i];
        if(temp==0)ans=max(ans,i+1);
       else if(m.find(temp)!=m.end()){
            ans=max(ans,i-m[temp]);
        }
        else
        m[temp]=i;
        
        }
        return ans;
}
