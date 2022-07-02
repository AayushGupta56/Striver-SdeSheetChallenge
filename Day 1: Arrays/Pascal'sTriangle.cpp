#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int num ) 
{
   vector<vector<long long int>> ans(num );
        for(int i=0;i<num ;i++){
             
            ans[i]=vector<long long int>(i+1);//////////////////////////////
             
            ans[i][0]=1;ans[i][i]=1;
            for(int j=1;j<i;j++)
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            
        }
        return ans;
}
