
#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace  std;
class Solution {
public:
  int helper(vector<int>days,vector<int>costs,int pos,vector<int>&memo){
    cout<<pos<<endl;
    if(pos>=days.size()){
      return 0;
    }
    
    if(memo[pos]!=-1){
      return memo[pos];
    }
    int ch1=helper(days,costs,pos+1,memo)+costs[0];

    int ind=pos;
    int curr=days[pos];
    while(curr+7>days[ind]){
      ind++;
    if(ind>=days.size()){
        break;
      }
    }
    int ch2=helper(days,costs,ind,memo)+costs[1];
    ind=pos;
    curr=days[pos];
    while(curr+30>days[ind]){
      ind++;
      if(ind>=days.size()){
        break;
      }
    }
    int ch3=helper(days,costs, ind,memo)+costs[2];
    return min(ch1,min(ch2,ch3));
  }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
      vector<int>memo(days.size()+1,-1);
      memo[days.size()]=0;
      for(int i=days.size()-1;i>=0;i--){
        memo[i]=helper(days,costs,0,memo);

      }
        
      return memo[0];
    }
};
