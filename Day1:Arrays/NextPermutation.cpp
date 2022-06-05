#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
            int piviot=-1;
        for(int i=nums.size()-2;i>=0;--i){
        if(nums[i+1]>nums[i]){
            piviot=i;break;
        }
        }//cout<<piviot<<endl;
            if(piviot<0){reverse(nums.begin(),nums.end());}
            else{
            for(int i=nums.size()-1;i>piviot;i--){
              if(nums[i]>nums[piviot]){
                  swap(nums[i],nums[piviot]);
            break;}
        }
           reverse(nums.begin()+piviot+1,nums.end());
            }
    return nums;
    }
 
