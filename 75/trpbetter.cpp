
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool compare(const vector<int> &a, const vector<int> &b) { return a[0] < b[0]; }
class Solution {
public:
  bool increasingTriplet(vector<int> &nums) {
    int l=nums.size();
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<l;i++){
      if(nums[i]<min){
        min=nums[i];
      }
      if(nums[l-i-1]>max){
        max=nums[l-i-1];
      }
      if(i==0 || i==l-1){
        continue;
      }
      // cout<<min<<" "<<max<<endl;
      if(min<max && nums[i]!=min && nums[i]!=max){
        return true;
      }
    
    }
    return false;
  }
};
