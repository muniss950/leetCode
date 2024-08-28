#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdint>
#include <iterator>
#include <queue>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
  int countPairs(vector<int> &nums) {
    vector<vector<int>> hash(nums.size(), vector<int>(7, 0));
    int temp, j;
    for (int i = 0; i < nums.size(); i++) {
      temp = nums[i];
      j = 0;
      while (j < 6 && temp) {
        hash[i][j++] = temp % 10;
        temp /= 10;
      }
    }
    int ans = 0;
    int foo = 0;
    bool test = true;
    queue<int> left, right;
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] == nums[j]) {
          ans++;
          continue;
        }
        // foo = 0;
        test = true;

        int lol = 1, haha = 1;
        for (int x = 0; x < 7; x++) {
          if (hash[i][x] != hash[j][x]) {
            if (hash[i][x] == right.front()) {
              lol = 0;
              right.pop();
            }
            if (hash[j][x] == left.front()) {
              haha = 0;
              left.pop();
            }
            if (lol) {
              left.push(hash[i][x]);
            }
            if (haha) {
              right.push(hash[j][x]);
            }
          }
          lol = 1;
          haha = 1;
        }
        if (left.empty() && right.empty()) {
          ans++;
        }
      }
    }

    return ans;
  }

  vector<int> getFinalState(vector<int> &nums, int k, int multiplier) {
    int mod = 1e9 + 7;

    if (nums.size() == 1) {
      nums[0] = nums[0] * (int)pow(multiplier, k);
      return nums;
    }
    int res = 0, temp;
    ;
    for (int ind = 0; ind < k; ind++) {
      cout << ind << endl;
      int min = 0;
      for (int i = 1; i < nums.size(); i++) {
        if (nums[min] > nums[i]) {
          min = i;
        }
      }
      nums[min] %= mod;
      res = 0;

      temp = multiplier;
      int a = nums[min];
      while (temp) {
        if (temp & 1) {
          res = (res + a) % mod;
        }
        a = (2 * a) % mod;
        temp >>= 1;
      }
      nums[min] = res;
    }
    return nums;
  }
};
