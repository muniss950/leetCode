#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int longestSubarray(vector<int> &nums) {
    int l = nums.size();
    vector<int> prefix(l, 0);
    int total = 0;
    for (int i = 0; i < l; i++) {
      if (nums[i] == 0)
        total++;
      prefix[i] = total;
    }
    if (total == 0) {
      return nums.size() - 1;
    }

    int left = 0, right = l - 1;
    int max = 0;
    int length = 0;
    int zeroes = 0;
    bool flag = false;
    for (int i = 0; i < l; i++) {
      right = l - 1;
      while (prefix[right] - prefix[i] + !(nums[i]) > 1) {
        right--;
        if (right <= i) {
          break;
        }
      }
      length = right - i + 1;
      if (max < length) {
        max = length;
      }
      cout << length << endl;
    }
    return max - 1;
  }
};
