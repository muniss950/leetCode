#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      sort(nums.begin(),nums.end());
      int k=0;
      int i=0;
      bool flag=false;
      while(nums[i]!=val){
        i++;
        if(i==nums.size()){
          return -1;
        } 
      }
      k=i;
      while(nums[i]==val){
        i++;
        if(i==nums.size()){
          return k;
        }
      }
      for(int j=i;j<nums.size();j++){
        nums[k++]=nums[j];
      }
      return k+1;
      
        
    }
};
