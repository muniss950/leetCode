#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int l=nums.size();
      vector<int>sumarr;
      sumarr.push_back(0);
      int sum=0;
      for(int i=0;i<l;i++){
        sum+=nums[i];
        sumarr.push_back(sum); 
      }
      for(int i=0;i<l;i++){
        if((sumarr[l-1]-sumarr[i]-nums[i])==sumarr[i]){
          return i;
        }
      }
      return -1; 
    }
};
