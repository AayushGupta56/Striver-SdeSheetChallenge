int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
     // 0,0,1,1,1,2,2,3,3,4
      //j i
      1 2 3 4  5
            int j=0;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1])continue;
            if(arr[i]!=arr[j]){arr[j+1]=arr[i];j++;}
        }
        return j+1;
}
