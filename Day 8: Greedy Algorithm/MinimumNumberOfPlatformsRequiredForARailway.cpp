int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);sort(dt,dt+n);int ans=1;
    int i=1;int j=0;int count=1;
    while(j<n&&i<n){
        if(at[i]<=dt[j]){
            i++;count++;
        }
        else if(at[i]>dt[j]){
            count--;j++;
        }
        ans=max(ans,count);
        
        
    }
    return ans;
}
