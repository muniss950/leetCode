#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
  int helper(int amount, vector<int> coins, int pos, vector<int> &memo) {
    if (amount == 0) {
      return 1;
    }
    if (amount < 0) {
      return 0;
    }
    if(memo[amount]!=-1){
      return memo[amount];
    }

    int sum = 0;
    for (int i = pos; i < coins.size(); i++) {
      sum += helper(amount - coins[i], coins, i,memo);
    }
    return sum;
  }
  int change(int amount, vector<int> &coins) {
    vector<int> memo(amount + 1, -1);
    for (int i = 1; i < amount + 1; i++) {

      memo[i] = helper(amount, coins, 0,memo);
    }
    return memo[amount];
  }
};
