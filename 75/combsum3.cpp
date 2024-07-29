#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <functional>
#include <ios>
#include <iostream>
#include <queue>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
  vector<vector<int>> ans;
  bool isused(vector<int> comb, int num) {
    for (auto i : comb) {
      if (i == num) {
        return true;
      }
    }
    return false;
  }
  void backtrack(int k, int n, vector<int> comb,int curr) {
    if(k==0){
      if(n==0){
        ans.push_back(comb);
      }
      return;
    }
    for(int i=curr;i<=9;i++){
      vector<int>temp=comb;
      if(!isused(comb, i)){
        temp.push_back(i);
        backtrack(k-1, n-i, temp,i);
      }
    }

  }
  vector<vector<int>> combinationSum3(int k, int n) {
    vector<int> comb = {};
    backtrack(k, n, comb,1);
    return ans;
  }
};
