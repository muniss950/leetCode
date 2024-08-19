#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <functional>
#include <iostream>
#include <queue>
#include <regex>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
  int helper(vector<int>nums,vector<int>&memo,int curr,int sum){
    if(curr>=nums.size()){
      cout<<"Test"<<endl;;
      return sum;
    }
    if(memo[curr]!=-1){
      return memo[curr];
    }
    for(int i=curr+1;i<nums.size();i++){
      memo[curr]=max(helper(nums,memo, i+curr, sum+nums[curr]),helper(nums, memo,1+curr, sum));
    }
    return memo[curr];

  }
    int rob(vector<int>& nums) {
      if(nums.size()==1){
        return nums[0];
      }
      if(nums.size()==0){
        return 0;
      }
      vector<int>memo(nums.size()+1,-1);
      return helper(nums,memo, 0, 0);
    }
};
