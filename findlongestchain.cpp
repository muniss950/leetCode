#include <bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;
class Solution {
public:
  static bool compare(const vector<int> &a, const vector<int> &b) {
    if (a[0] == b[0]) {
      return a[1] < b[1];
    }
    return a[0] < b[0];
  }
  int helper(vector<vector<int>> pairs, int curr, int pos,vector<int>&memo) {
    if (pos >= pairs.size() - 1) {
      return curr;
    }
    if(memo[pos]!=-1){
      return memo[pos];
    }
    // cout<<pairs[pos][0]<<" "<<pairs[pos][1]<<endl;
    int max = 0;
    for (int i = pos + 1; i < pairs.size(); i++) {
      int temp = 0;
      if (pairs[pos][1] < pairs[i][0]) {
        temp = helper(pairs, curr + 1, i,memo);
      }
      if (temp > max) {
        max = temp;
      }
    }
    memo[pos]=max;
    return max;
  }
  int findLongestChain(vector<vector<int>> &pairs) {
    if (pairs.size() == 1) {
      return 1;
    }
    sort(pairs.begin(), pairs.end(), compare);
    vector<int> memo(pairs.size() + 1,-1);
    memo[pairs.size()]=0;

    for (auto i : pairs) {
      cout << i[0] << " " << i[1] << endl;
    }
    int max = 0;
    for (int i = pairs.size()-1; i >=0; i--) {
      int temp = helper(pairs, 1, i,memo);
      if (temp > max) {
        max = temp;
      }
      memo[i]=temp;
    }
    return max;
  }
};
