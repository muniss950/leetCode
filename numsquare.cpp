#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
  int helper(int num,int left,int curr,vector<vector<int>>&memo){
    cout<<left<<" "<<curr<<endl;
    if(memo[left][curr]!=-1){
      return memo[left][curr]+num;
    }
    if(left==0){
      return num;
    }
    if(left<0){
      return INT_MAX;
    }
    if(curr<=0){
        return INT_MAX;
    }
    int sum=helper(num+1,left-curr*curr,curr,memo);
    sum=min(sum,helper(num,left,curr-1,memo));
    memo[left][curr]=sum;

    return sum;
  }
    int numSquares(int n) {
      vector<vector<int>>memo(n+1,vector(n+1,-1));
      for(int i=0;i<=n;i++){
        memo[0][i]=0;
      }
        int i=n;
        while(i*i>n){
            i--;
        }
      return helper(0,n,i,memo);
        
    }
};
