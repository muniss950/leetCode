

#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    // sort(nums.begin(),nums.end());
    map<int, vector<int>> hash;
    for (int i = 0; i < nums.size(); i++) {
      hash[nums[i]].push_back(i);
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
      int j = i + 1;
      int sum = nums[i] + nums[j];
      while (sum < target) {
        sum = nums[i] + nums[++j];
      }
      if (sum == target) {
        if (hash[nums[i]].back() != hash[nums[j]].back())
          return {hash[nums[i]].back(), hash[nums[j]].back()};
        else{
          int temp=hash[nums[i]].back();;
          cout<<"test"<<endl;
          hash[nums[i]].pop_back();
          cout<<"lo"<<endl;
          
          return {hash[nums[i]].back(),temp};
        }
      }
    }
    return {-1, -1};
  }
};
