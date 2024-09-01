#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
#include <strings.h>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++) {
      hash[nums[i]] = 1;
    }
    int max = 0;
    int curr = 0;
    for (int i = 0; i < hash.size(); i++) {
      int temp = i;
      curr = 0;
      while (hash[temp]) {
        temp++;
        curr++;
      }
      if (curr > max) {
        max = curr;
      }
    }
    if (curr > max) {
      max = curr;
    }
    return max;
  }
};
