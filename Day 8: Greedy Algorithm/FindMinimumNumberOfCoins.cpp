int findMinimumCoins(int amount) 
{
    // Write your code here
    int arr[]={1,2,5,10,20,50,100,500,1000};
    int i=8;int count=0;
    while(amount>0){
        if(amount>=arr[i]){
            amount-=arr[i];count++;
        }
        else i--;
     }
    return count;
}
