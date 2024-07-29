#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
  int findPeakElement(vector<int> &nums) {
    if (nums.size() == 1) {
      return nums[0];
    }
    int mid = nums.size() / 2;
    int start=0;
    int end=nums.size();
    while (true) {
      if (mid == 0) {
        if (nums[mid] > nums[mid + 1]) {
          return mid;
        }
        return -1;
      }
      if (mid == nums.size() - 1) {
        if (nums[mid] > nums[mid - 1]) {
          return mid;
        } else {
          cout << mid << endl;
          mid = mid / 2;
        }
        continue;
      }
      if (nums[mid] > nums[mid + 1]) {
        if (nums[mid] > nums[mid - 1]) {
          return mid;
        } else {
          end=mid;
          mid = (end-start) / 2;
        }
      } else {
        start=mid;
        mid += (end-start) / 2;
      }
    }
    return mid;
  }
};
