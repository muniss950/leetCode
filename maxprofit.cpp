
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <vector>

using namespace std;
class Solution {
public:
  // int helper(vector<int>prices,vector<int>memo,int pos){
  //    
  //   if(pos==prices.size()-1){
  //     return 0;
  //   }
  //   // int high=0;
  //   // for(int i=pos+1;i<prices.size();i++){
  //   //   if(prices[i]>high && prices[i]>prices[pos]){
  //   //     high=prices[i];
  //   //   }
  //   // }
  //   int prof;
  //   if(memo[pos]-prices[pos]>0){
  //     prof=memo[pos]-prices[pos];
  //   }
  //   else{
  //     prof=0;
  //   }
  //   return max(prof,helper(prices,memo, pos+1));
  // }
  int maxProfit(vector<int> &prices) {
    vector<int>memo(prices.size()+1,-1);
    int max=-1;
    for(int i=prices.size()-2;i>=0;i--){
      if(prices[i]>max){
        max=prices[i];
      }
      memo[i]=max;
    }
    int prof=0;
    for(int i=0;i<prices.size();i++){
      if(memo[i]-prices[i]>prof){
        prof=memo[i]-prices[i];
      }

    }
    
    return prof;
  }
};
