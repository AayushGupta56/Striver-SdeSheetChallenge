#include <bits/stdc++.h> 
 
int solve(int a,int b,int m){
    //a^b
     if(b==0)return 1;
 long long  ans=solve(a,b/2,m);
     if(b%2==1)return (((a%m)*(ans%m))%m*(ans%m))%m;
     else return (ans*ans)%m;
} 
 int modularExponentiation(int x, int n, int m) {
 
    
    return solve(x,n,m);
    // 	 int ans=1;
       
//         while(n>0){
//             if(n%2==1){
//                 ans=( 1LL *(ans)*(x)%m);
//                 n=n-1;
//             }
//             else{
//                 x=( 1LL *(x)%m*(x)%m);
//                 n=n/2;
//             }
           
//         }
       
//         return ans;
}
