
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
    
    int minele=arr[0];int maxele=arr[0];int ans=arr[0];
    for(int i=1;i<n;i++){
 
        int a=minele;int b=maxele;
        minele=min(arr[i],min(arr[i]*a,arr[i]*b));
         maxele=max(arr[i],max(arr[i]*a,arr[i]*b));
         ans=max(ans,maxele);
    }
   return ans;
}
