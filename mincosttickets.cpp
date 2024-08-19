
#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace  std;
class Solution {
public:
  int helper(vector<int>days,vector<int>costs,int pos){
    if(days.back()<pos){
      return 0;
    }
    
    int ch1=helper(days,costs,pos+1)+costs[0];
    int ch2=helper(days,costs, pos+7)+costs[1];
    int ch3=helper(days,costs, pos+30)+costs[2];
    return min(ch1,min(ch2,ch3));
  }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
      return helper(days,costs,0);
    }
};
