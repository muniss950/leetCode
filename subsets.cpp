#include <bits/stdc++.h>
#include <cmath>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;
class Solution {
public:
  vector<vector<int>> ans;
  vector<vector<int>> subsetsWithDup(vector<int> &nums) {
    int n = nums.size();
    int l = pow(2, n);

    int temp;
    int pos=0;
    for (int i = 0; i < l; i++) {
      vector<int> lol;
      temp = i;
      
      pos=0;
      while (temp) {
        if (temp % 2) {
          lol.push_back(nums[pos]);
        }
        temp/= 2;
        pos++;
      }

      ans.push_back(lol);
    }
    return ans;
  }
};
