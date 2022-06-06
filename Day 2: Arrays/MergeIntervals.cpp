#include <bits/stdc++.h> 
 
 static bool comp(const vector<int>&v1,const vector<int>&v2){
        if(v1[0]==v2[0]){
            return v1[1]<v2[1];
        }
        return v1[0]<v2[0];
        
    }

vector<vector<int>> mergeIntervals(vector<vector<int>> &arr)
{
    vector<vector<int>> ans; int n=arr.size()-1;
        sort(arr.begin(),arr.end(),comp);
        int s=arr[0][0];int e=arr[0][1];
        for(int i=1;i<arr.size();i++){
            if(arr[i][0]<=e){
                e=max(e,arr[i][1]);
                
            }
            else{
                ans.push_back({s,e});
                
                s=arr[i][0];
                e=arr[i][1];
            }
        }
         
         ans.push_back({s,e});
        return ans;
}
