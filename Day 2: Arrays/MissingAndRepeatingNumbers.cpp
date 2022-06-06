#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
     int temp[n+1];int missing=0,repeating=0;
    for(int i=1;i<=n;i++){
        temp[i]=-1;
    }
    for(int i=0;i<n;i++){
       if(temp[arr[i]]==arr[i])repeating=arr[i];
        temp[arr[i]]=arr[i];
    }
    
    for(int i=1;i<=n;i++){
        if(temp[i]==-1)missing=i;
    }
    return {missing ,repeating};
}
