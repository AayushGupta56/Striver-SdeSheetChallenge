#include<bits/stdc++.h>
bool comp(pair<int,int>a,pair<int,int>b){
    return (double)a.second/ (double)a.first> (double)b.second/ (double)b.first;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(),items.end(),comp);
    //for(int i=0;i<items.size();i++){cout<<items[i].first<<"F"<<items[i].second<<endl;}
    double ans=0;int filled=0;
    for(int i=0;i<items.size();i++){
        if(filled<w){
            double ratio= (double)items[i].second/ (double)items[i].first;
            int temp=min(items[i].first,w-filled);
            filled+=temp;
            ans=ans+ (double)temp* (double)ratio; 
        }  
    }
}
