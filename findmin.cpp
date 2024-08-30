#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
      if(nums.size()==1){
        return nums[0];
      }
      int i=1;
      while(i<nums.size() &&nums[i]>nums[i-1]){
        i++;
      }
      if(nums[0]<nums.back()){
        return nums[0];
      }
      int start=0;
      int end=nums.size();
      while (start<=end) {
        int mid=(start+end)/2;
        mid%=nums.size();
        if(nums[mid]>nums[(mid+1)%nums.size()]){
          return nums[(mid+1)%nums.size()];
        }
        else if(nums[mid]>nums.back()){
          start=mid+1;
        }
        else {
          end=mid-1;
        }
      }
      return -1;
        
    }
};
