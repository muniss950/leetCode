#include <bits/stdc++.h>
#include <cmath>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
public:
  int ans = 0;
  int subarraySum(vector<int> &nums, int k) {
    if (nums.size() == 1) {
      return (int)(nums[0] == k);
    }
    vector<int> hash(nums.size() + 1, 0);
    int sum = 0;
    for (int i = 1; i < hash.size(); i++) {
      sum += nums[i - 1];
      hash[i] = sum;
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < hash.size(); i++) {
      if (hash[i] == k) {
        ans++;
      }
      if (mp.find(hash[i] - k) != mp.end()) {
        ans += mp[hash[i] - k];
      }
      mp[hash[i] - k]++;
    }
    return ans;
  }
};
