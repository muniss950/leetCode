#include <bits/stdc++.h>
#include <cmath>
#include <vector>

using namespace std;
class Solution {
public:
  int ans=0;
  void helper(vector<int>hash,int start,int end,int k){

    if(end>=hash.size()){
      return;
    }
    int diff=hash[end]-hash[start];
    if(diff==k){
      ans++;
    }
      helper(hash,start+1, end, k);
      helper(hash,start, end+1, k);
      return;
  }
    int subarraySum(vector<int>& nums, int k) {
      vector<int>hash(nums.size()+1,0);
      int sum=0;
      for(int i=1;i<=nums.size();i++){
        sum+=nums[i-1];
        hash[i]=sum;
      }
        
      helper(hash, 0, 0, k);
      return ans;
    }
};
