#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> searchRange(vector<int> &nums, int target) {
    int start = 0;
    int end = nums.size();
    while (start <= end) {
      int mid = (start + end) / 2;
      if (nums[mid] == target) {
        while (nums[start] != target) {
          start++;
        }
        while (nums[end] != target) {

          end--;
        }
        return {start,end};
      } else if (nums[mid] < target) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    return {};
  }
};
