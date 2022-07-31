#include <bits/stdc++.h> 
int solve(int a,int b,int m){
	//a^b
     if(b==1)return a;
    long ans=solve(a,b/2);
     if(b%2==1)return (a*(ans*ans)%m)%m;
     else return (ans*ans)%m;
}
int modularExponentiation(int x, int n, int m) {
	 int ans=1;
       
        while(n>0){
            if(n%2==1){
                ans=( 1LL *(ans)*(x)%m);
                n=n-1;
            }
            else{
                x=( 1LL *(x)%m*(x)%m);
                n=n/2;
            }
           
        }
       
        return ans;
}
