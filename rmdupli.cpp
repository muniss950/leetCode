#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if(nums.size()<=1){
        return nums.size();
      }
      int k=0;
        
      bool flag=false;
      int temp=nums[0];
      for(int i=1;i<nums.size();i++){
        while(nums[i]==temp ){
          i++;
        }
        nums[k-1]=temp;
      }
      return k+1;
    }
};
