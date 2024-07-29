#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int longestOnes(vector<int> &nums, int k) {
    int l = nums.size();
    vector<int> prefix(l, 0);
    int total = 0;
    for (int i = 0; i < l; i++) {
      if (nums[i] == 0)
        total++;
      prefix[i] = total;
    }
    if (total <= k) {
      return nums.size();
    }
    if (total == nums.size()) {
      return min(k, total);
    }
    int left = 0, right = l - 1;
    int max = 0;
    int length = 0;
    int zeroes = 0;
    bool flag = false;
    for (int i = 0; i < l; i++) {
      while (prefix[right] - prefix[i] + !(nums[i]) > k) {
        right--;
        if (right <= i) {
          break;
        }
      }
      length = right - i + 1;
      if (max < length) {
        max = length;
      }
    }
    return max;
  }
};
class Soluton {
public:
  int longestOnes(vector<int> &nums, int k) {
    int cnt = 0;
    int l = 0, r = 0;
    int maxi = 0;
    while (r < nums.size()) {

      if (cnt <= k) {
        if (nums[r] == 0) {
          cnt++;
        }
        if (cnt <= k) {
          maxi = max(maxi, r - l + 1);
        }

        r++;

      }

      else {
        while (cnt > k) {
          if (nums[l] == 0) {
            cnt--;
          }
          l++;
        }
      }
    }
    return maxi;
  }
};
