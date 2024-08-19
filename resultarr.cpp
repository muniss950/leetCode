#include <bits/stdc++.h>
#include <climits>
#include <filesystem>
#include <functional>
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> resultsArray(vector<int> &nums, int k) {
    int max;
    vector<int> ans(nums.size() - k + 1, 0);
    // vector<int>arr(nums.size(),0);
    // int sum=0;
    // for(int i=0;i<nums.size();i++){
    //   sum+=nums[0];
    //   arr[i]=sum;
    // }
    if (nums.size() == 1 || k == 1) {
      return nums;
    }
    long long int cnt = 0;
    int notcons = -1;
    int pos = 0;
    int t = 1;
    for (int i = 1; i < nums.size() - k + 1; i++) {
      if (nums[i] - nums[i - 1] != 1) {
        notcons = i;
      }
      if (t == k) {
        if (notcons!=i-k+1) {
          ans[pos++] = -1;
        } else {
          ans[pos++] = nums[i];
        }
        t--;
        continue;
      }
      t++;
    }
    cout << cnt << endl;
    return ans;
  }
};
