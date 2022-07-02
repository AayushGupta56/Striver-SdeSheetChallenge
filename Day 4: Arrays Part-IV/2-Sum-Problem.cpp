#include <bits/stdc++.h> 
bool comp(vector<int>a,vector<int>b){
    if(a[1]==b[1]) return a[1]<b[1];
    else return a[0]<b[0];
}
vector<vector<int>> pairSum(vector<int> &arr, int target){
   vector<vector<int>>ans;unordered_map<int,int> tracker;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            int count=tracker[target-arr[i]];
            int remain=target-arr[i];
            while(count){
               
               ans.push_back({min(arr[i],remain),max(arr[i],remain)});
              count--;
            }
            tracker[arr[i]]+=1;
         }
    sort(ans.begin(),ans.end(),comp);
        return ans;
    
 
    return ans;
}
