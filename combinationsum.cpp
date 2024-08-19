#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<vector<int>>ans;
  void helper(vector<int>candidates,vector<int>curr,int target,int pos){
    if(target<0){
      return;
    }
    if(target==0){
        ans.push_back(curr);
        return;
      }
    if(pos==candidates.size()){
      return;
    }

    helper(candidates,curr, target, pos+1);
    curr.push_back(candidates[pos]);
    helper(candidates,curr, target-candidates[pos], pos);
  }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      helper(candidates,{},target,0);
      return ans;
        
    }
};
