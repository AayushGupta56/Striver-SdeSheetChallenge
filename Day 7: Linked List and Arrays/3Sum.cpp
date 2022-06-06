#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int k) {
	   n=arr.size(); vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++){
if (i > 0 && arr[i] == arr[i-1])continue;/////////////////////////////////////
    
            int a=arr[i];
            int target=k-a;
            int s=i+1;int e=n-1;
            while(s<e){
                if(arr[s]+arr[e]==target){
                      ans.push_back({a,arr[s],arr[e]});
                    int b=arr[s];int c=arr[e];
                    while(s<e&&arr[s]==b)s++;////////////
                    while(s<e&&arr[e]==c)e--;///////////////
                  
                
                }
              else if(arr[s]+arr[e]>target){e--;}
              else if(arr[s]+arr[e]<target){s++;}
                
            }
        }
        return ans;
}
