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
    vector<int>leftmin(l,0);
    vector<int>rightmax(l,0);
    leftmin[0]=0;
    rightmax[l-1]=0;
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<l;i++){
      if(nums[i]<min){
        min=nums[i];
      }
      leftmin[i]=min;
      if(nums[l-i-1]>max){
        max=nums[l-i-1];
      }
      rightmax[l-i-1]=max;
    }
    for(int j=1;j<l-2;j++){
      if(leftmin[j]<rightmax[j] && (nums[j]!=leftmin[j] && nums[j]!=rightmax[j])){
        return true;
      }
    }
    return false;
  }
};
