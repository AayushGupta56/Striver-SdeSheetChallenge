#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int x , int n) {
    vector<vector<int>> ans;
        
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
           if(i>0&&arr[i]==arr[i-1])continue;//////////////////
            int a=arr[i];
            for(int j=i+1;j<n;j++){
                if(j>i+1&&arr[j]==arr[j-1])continue;///////////////////
                int b=arr[j];
                int s=j+1;int e=n-1;
                int target=x-a-b;
                
                while(s<e){
                    if(arr[s]+arr[e]==target){
                        ans.push_back({a,b,arr[s],arr[e]});
                        int p=arr[s];int q=arr[e];
                        while(s<e&&arr[s]==p)s++;///////////
                        while(s<e&&arr[s]==q)e--;/////////////
                    }
                    else if(arr[s]+arr[e]<target)s++;
                    else e--;
                   
                }
                
            //   while(j+1<n&&arr[j]==arr[j+1])j++;
                
            }
          //   while(i+1<n&&arr[i]==arr[i+1])i++;
            
        }
        if(ans.size()==0)return "No";
         else return "Yes";
}
