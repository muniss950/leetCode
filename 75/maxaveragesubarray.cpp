#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max;
        vector<int>res;
        vector<int>sumarr;
        int totsum=0; 
        int l=nums.size();
        for(int i=0;i<l;i++){
          totsum+=nums[i];
          sumarr.push_back(totsum);
        }
        int sum=0;
        for(int i=0;i<l-k;i++){
          sum=0;
          sum=sumarr[i+k]-sumarr[i];
          if(sum>max){
            max=sum;
          }
        }
        return (max/sum);
    }
};
