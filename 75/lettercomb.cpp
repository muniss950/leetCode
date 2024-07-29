#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
  vector<string> ans;
  map<int, vector<char>> dic;
  void backtrack(string curr, string digits,int index) {
    if(++index==digits.size()){
      ans.push_back(curr);
      return;
    }
    string temp;
    for(auto k:dic[digits[index]]){
      temp=curr;
      temp.push_back(k);
      backtrack(temp,digits, index);
    }
    return;
  
  }
  vector<string> letterCombinations(string digits) {
    int asci = 97;
    for (int i = 2; i < 10; i++) {
      int x = 3;
      if (i == 7 || i == 9) {
        x = 4;
      }
      for (int j = 0; j < x; j++) {
        dic[i].push_back(char(asci++));
      }
    }
    // for (auto i : dic) {
    //   cout << i.first << ": ";
    //   for (auto j : i.second) {
    //     cout << j << " ";
    //   }
    //   cout << endl;
    // }
    string curr = "";
    backtrack(curr, digits,0);
    return ans;
  }
};
