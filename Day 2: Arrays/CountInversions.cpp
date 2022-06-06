#include <bits/stdc++.h>
int mergesort(long long arr[],int s,int mid,int e){
    int ans[e-s+1];///
    int i=s; ;int j=mid;long long count=0;int k=0;
    while(i<mid&&j<=e){
        if(arr[i]>arr[j]){
            ans[k++]=arr[j++];
            count+=mid-i;//////////////
        }
        else{
            ans[k++]=arr[i++];
        }
        
    }

    while(i<mid){  ans[k++]=arr[i++];}
    while(j<=e){ ans[k++]=arr[j++];}
      k=0;i=s;////////////////writing i=0 again and again
    for( i=s;i<=e;i++){///////
        arr[i]=ans[k];k++;///////
    }//////
    //
    return count;
    
    
}

long long merge(long long arr[],int s,int e){
    int mid;
    if(e>s){//////
        mid=(s+e)/2;
      // long long count=0;
         long long a =merge(arr,s,mid);
         long long b =merge(arr,mid+1,e);
        long long c  =mergesort(arr,s,mid+1,e);//////////passing mid only not mid+1;
        return a+b+c;
    }
    return 0;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
   long long ans= merge(arr,0,n-1);
    return ans;
}
