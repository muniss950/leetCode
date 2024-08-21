#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
  int helper(int amount, vector<int> coins, int pos, vector<vector<int>> &memo) {
    cout << amount << " ";
    if (amount < 0) {
      cout << "lol" << endl;
      return 0;
    }
    if(memo[amount][pos]!=-1){
        cout<<endl;
      return memo[amount][pos];
    }
    if (amount == 0) {
      cout << endl;
      return 1;
    }
    long long int sum = 0;
    for (int i = pos; i < coins.size(); i++) {
      sum += helper(amount - coins[i], coins, i, memo);
    }
    memo[amount][pos] = sum;
    return sum;
  }
  int change(int amount, vector<int> &coins) {
    vector<vector<int>> memo(amount + 1, vector(coins.size(), -1));
    for (int i = 0; i < coins.size(); i++) {
      memo[0][i] = 1;
    }
    for (int i = 0; i < amount + 1; i++) {
      cout << i << ": " << endl;
      for (int j = 0; i < coins.size(); j++) {
        memo[i][j] = helper(i, coins,j, memo);
      }
      //   cout<<memo[i]<<endl;
    }
    int sum=0;

    for(int i=0;i<coins.size();i++){
      sum+=memo[amount][i];
    }
    return sum;
  }
};
