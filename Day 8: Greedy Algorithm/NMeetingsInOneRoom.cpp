#include<bits/stdc++.h>
class meet{
  public:
    int s;
    int e;
    int pos;
};
bool comp(meet a,meet b){
    if(a.e==b.e)return a.pos<b.pos;
    else return a.e<b.e;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n=start.size();meet arr[n];
    for(int i=0;i<n;i++){
        arr[i].s=start[i];arr[i].e=end[i];arr[i].pos=i+1;
    }
    vector<int>ans;
   
    sort(arr,arr+n,comp);
     int limit=arr[0].e;ans.push_back(arr[0].pos);
      for(int i=1;i<n;i++){
       if(arr[i].s>limit){ans.push_back(arr[i].pos);limit=arr[i].e;}
    }
    return ans;
}
