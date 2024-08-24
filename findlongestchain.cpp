#include <bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;
class Solution {
public:
  static bool compare(const vector<int> &a, const vector<int> &b) {
    if (a[1] == b[1]) {
      return a[0] < b[0];
    }
    return a[1] < b[1];
  }
  int helper(vector<vector<int>> pairs, int curr, int pos,int prev,vector<int>&memo) {
    if (pos >= pairs.size() ) {
      return curr;
    }

    if(prev==-1){
      memo[pos]=helper(pairs,curr+1,pos+1,pos,memo);
      return memo[pos];
    }
    if(pairs[prev][1]<pairs[pos][0] &&memo[pos]!=-1){
      return memo[pos]+curr;
    }
    int temp=helper(pairs,curr,pos+1,prev,memo);
    if(pairs[prev][1]<pairs[pos][0]){
      temp=max(temp,helper(pairs,curr+1,pos+1,prev,memo));
    }
    memo[pos]=temp;
    return memo[pos];
  }
  int findLongestChain(vector<vector<int>> &pairs) {
    if (pairs.size() == 1) {
      return 1;
    }
    sort(pairs.begin(), pairs.end(), compare);
    vector<int> memo(pairs.size() + 1,-1);
    memo[pairs.size()]=0;

    // for (auto i : pairs) {
    //   cout << i[0] << " " << i[1] << endl;
    // }
    int max = 0;
    for (int i = pairs.size()-1; i >=0; i--) {
      int temp = helper(pairs, 0, i,-1,memo);
      if (temp > max) {
        max = temp;
      }
      memo[i]=temp;
    }
    return max;
  }
};
