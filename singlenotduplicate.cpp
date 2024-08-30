#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int singleNonDuplicate(vector<int> &nums) {
    int x = nums[0];
    int start = 0;
    int end = nums.size();
    while (start <= end) {
      int mid = (start + end) / 2;
      if (mid > 0 && mid < nums.size() - 2) {
        if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1]) {
          return mid;
        }
      }else{
        if(nums[mid]!=nums[(mid+1)%nums.size()]){
          return mid;
        }
      } 
      if(mid%2==0){
        end=mid-1;
      }
      else{
        start=mid+1;
      }
    }
    return -1;
  }
};
