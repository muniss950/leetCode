
#include <bits/stdc++.h>
#include <queue>
#include <stack>
#include <vector>

using namespace std;
class Solution {
public:
  int helper(int m,int n,int i,int j,vector<vector<int>>&memo){
    if(i==m-1 ||j==n-1){
      return 1;
    }
    if(memo[i][j]!=-1){
      return memo[i][j];
    }
    memo[i+1][j]=helper(m,n,i+1,j,memo);
    memo[i][j+1]=helper(m, n,i,j+1,memo);
    
    return memo[i+1][j]+memo[i][j+1];

  }
  int uniquePaths(int m, int n) {
    vector<vector<int>>memo(m+1);
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        memo[i].push_back(-1);
      }
    }
    return helper(m, n, 0, 0,memo);

  }
};
