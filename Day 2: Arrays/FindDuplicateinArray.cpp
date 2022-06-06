#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
  

for(int i=0;i<n;i++){
    int k = abs(arr[i]);
    if(arr[k] < 0) return k;
    else arr[k] = -arr[k];
}

       return 0;
}
