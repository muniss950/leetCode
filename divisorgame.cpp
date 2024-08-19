#include <bits/stdc++.h>
#include <vector>

using namespace std;
class Solution {
public:
  int helper(int n, vector<int> memo) {
    if (memo[n] != -1) {
      return memo[n];
    }
    if(n==1){
      return 0;
    }
    int temp=0;
    for (int i = 1; i < n; i++) {
      if (n % i == 0 ) {
        temp= temp||!helper(n-i, memo);
      }
    }
    return temp;
  }
  bool divisorGame(int n) {
    if (n == 1) {
      return false;
    }
    vector<int> memo(n + 1, -1);
    memo[0] = 0;
    for (int i = 1; i <= n; i++) {
      memo[i] = helper(i, memo);
    }
    return memo[n];
  }
};
