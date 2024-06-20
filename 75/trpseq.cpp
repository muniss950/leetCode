#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool compare(const vector<int> &a, const vector<int> &b) { return a[0] < b[0]; }
class Solution {
public:
  bool increasingTriplet(vector<int> &nums) {
    int l = nums.size();
    int minind = 0;
    int maxind = 0;
    for (int i = 0; i < l; i++) {
      if (nums[minind] > nums[i]) {
        minind = i;
      }
      if (nums[maxind] > nums[i]) {
        maxind = i;
      }
    }
    if (maxind - minind >= 2) {
      return true;
    }
    vector<vector<int>> sortind;
    for (int i = 0; i < l; i++) {
      sortind.push_back({nums[i], i});
    }
    sort(sortind.begin(), sortind.end(), compare);
    for (int i = 0; i < l; i++) {
      
    }
  }
};
