
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdint>
#include <iterator>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
  vector<int> memo;
  int helper(vector<int> nums, int curr, int sum) {
    if (curr >= nums.size()) {
      return INT_MAX;
    }

    if (curr == nums.size() - 1) {
      return sum;
    }
    int min = INT_MAX;
    for (int i = 1; i <= nums[curr]; i++) {
      int temp;
      if (curr + i < nums.size()) {
        if (memo[curr + i] != -1) {
          temp = memo[curr + i];
        } else {
          temp = helper(nums, curr + i, sum+1);
        }
        if (temp < min) {
          min = temp;
        }
      }
      else{
        break;
      }
    }
    return min;
  }

  int jump(vector<int> &nums) {
    for (int i = 0; i <= nums.size(); i++) {
      memo.push_back(-1);
    }
    memo[nums.size() - 1] = 0;
    for (int i = nums.size() - 2; i >= 0; i--) {
      memo[i] = helper(nums, i, 0);
      cout << memo[i] << endl;
    }
    return memo[0];
  }
};
