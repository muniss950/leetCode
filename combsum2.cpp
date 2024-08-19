#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<vector<int>> ans;
  vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
    vector<int>hash(51,0);

    int n = candidates.size();
    int l = pow(2, n);

    int temp;
    int pos = 0;
    for (int i = 0; i < l; i++) {
      vector<int> lol;
      temp = i;

      pos = 0;
      int sum = 0;
      while (temp) {
        if (temp % 2 &&!hash[candidates[pos]]) {
          
          lol.push_back(candidates[pos]);
          sum += candidates[pos];
          hash[candidates[pos]]=1;
        }
        temp /= 2;
        pos++;
      }
      if (sum == target)
        ans.push_back(lol);
    }
    return ans;
  }
};
