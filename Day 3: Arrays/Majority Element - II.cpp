#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
            int ele1=-1;int ele2=-1;int count1=0;int count2 =0;vector<int>ans;
       for(int i=0;i<arr.size();i++){
            if(arr[i]==ele1)count1++;
           else if(arr[i]==ele2)count2++;
          else if(count1==0){
               ele1=arr[i];count1=1;
           }
           else if(count2==0){
               ele2=arr[i];count2=1;
           }
           
           else
           {
               count1--;count2--;
           }
         
       }
        count1=0;count2=0;
        for(int i=0;i<arr.size();i++){
       if(arr[i]==ele1)count1++;
        if(arr[i]==ele2)count2++;
        
        }
        if(count1>arr.size()/3)ans.push_back(ele1);
        if(count2>arr.size()/3&&ele1!=ele2)ans.push_back(ele2);
     return ans;

}
