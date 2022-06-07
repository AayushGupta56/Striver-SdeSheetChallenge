#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
   
        
        vector<long  >fromleft(n,0);vector<long> fromright(n,0);   
        fromleft[0]=arr[0];fromright[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            if(arr[i]>fromleft[i-1])fromleft[i]=arr[i];////////////
            else
               fromleft[i]=fromleft[i-1];
        }
        
        for(int i=n-2;i>=0;i--){
            if(arr[i]>fromright[i+1])fromright[i]=arr[i];///////////////
             else
               fromright[i]=fromright[i+1];
        }
        
           long ans=0;
        for(int i=1;i<n-1;i++){
            ans+=min(fromleft[i],fromright[i])-arr[i];
        }
    
    return ans;
}
