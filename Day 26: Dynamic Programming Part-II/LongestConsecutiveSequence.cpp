#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
     unordered_set<int>m; 
        for(int i=0;i<n;i++){
            m.insert(arr[i]);
        }int ans=0;
        for(int i=0;i<n;i++){
            if(m.find(arr[i]-1)!=m.end())continue;
            else{
                int a=arr[i];int count=1;
                while(m.find(a+1)!=m.end()){
                    a++;
                    count++;
                }
                ans=max(ans,count);
            }
            
            
            
        }
        return ans;
}
