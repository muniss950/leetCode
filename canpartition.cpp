#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
  bool helper(vector<int>&nums,int pos,int left,int right){
    if(pos==nums.size()){
      return  left==right;
    }
    return helper(nums,pos+1,left+nums[pos], right)||helper(nums,pos+1,left,right+nums[pos]);
  }
    bool canPartition(vector<int>& nums) {
      return helper(nums,0, 0,0);
    }
};
