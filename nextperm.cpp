#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
class Solution {
public:
  void nextPermutation(vector<int> &nums) {
    int i=nums.size()-2;
    while(i>=0 &&nums[i]>nums[i+1]){
      i--;
    }
    if(i<0){
      reverse(nums.begin(),nums.end());
      return;
    }
    int j=nums.size()-1;
    while(j>i && nums[j]<nums[i]){
      j--;
    }
    swap(nums[i],nums[j]);
    reverse(nums[i+1],nums[nums.size()-1]);
    return ;
  }
};
