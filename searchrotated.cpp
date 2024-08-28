#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int search(vector<int> &nums, int target) {
    int k = 0;
    int i = 0;
    while ((i + 1) < nums.size() && nums[i] < nums[i + 1]) {
      k++;
    }
    int start=k;
    int end=k+nums.size();
    while(start<=end){
      int mid=(start+end)/2;

    }
  }
};
