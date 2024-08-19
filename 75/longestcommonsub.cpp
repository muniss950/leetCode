
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <stack>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
  int ans = 0;
  int helper(string cur1, string cur2, string text1, string text2, int pos,
             int len,vector<int>memo) {
    if(memo[pos]!=-1){
      return memo[pos];
    }

    if(cur1!=cur2){
      return -1;
    }
    if (pos == 0) {
      if (cur1 == cur2) {
        return cur1.size();
      }
    }
    int t1=helper(cur1, cur2, text1, text2, pos-1, len,memo); 
    cur1.push_back(text1[pos]);
    int t2=helper(cur1, cur2, text1, text2, pos-1, len,memo); 
    cur2.push_back(text2[pos]);
    int t3=helper(cur1, cur2, text1, text2, pos-1, len,memo); 
    cur1.pop_back();
    int t4=helper(cur1, cur2, text1, text2, pos-1, len,memo); 
    return max(t4,max(t3,max(t1,t2)));
  }
  int longestCommonSubsequence(string text1, string text2) {
    int len(max(text1.size(), text2.size()));;
    vector<int> memo(len, -1);
    for (int i = 0; i <len; i++) {
      string a, b;
      a = text1.substr(0, i + 1);
      b = text2.substr(0, i + 1);
      memo[i] = helper("", "", a, b, i, i,memo);
    }
    return memo[len - 1];
    // return helper("", "", text1, text2, 0,len);
  }
};
