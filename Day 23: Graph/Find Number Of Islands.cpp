void dfs(int**arr,int n,int m,int i,int j){
    if(i>=n||j>=m||i<0||j<0 || arr[i][j]!=1){return;}
    arr[i][j]=0;
   for(int k=-1;k<2;k++){
       for(int l=-1;l<2;l++){
          // if(arr[i+k][j+l]==1){   don't put this condition here becuse if we check array will go out of bounds
            dfs(arr,n,m,i+k,j+l);
          //}
       }
          
   }
    return;
}
int getTotalIslands(int** arr, int n, int m)
{
   int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(arr[i][j]==1){
            count++;
            dfs(arr,n,m,i,j);
        }
    }
       }
    return count;
    // Write your code here.
}
