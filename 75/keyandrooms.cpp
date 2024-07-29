#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <ios>
#include <iostream>
#include <regex>
#include <stack>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
  stack<int> st;
  void dfs(vector<vector<int>> rooms, vector<int> &isvis, int i) {

    if (!isvis[i]) {
      isvis[i] = 1;
      for (int j = 0; j < rooms[i].size(); j++) {
        st.push(rooms[i][j]);
      }
      while (!st.empty()) {
        dfs(rooms, isvis, st.top());
        st.pop();
      }
    }
    else{
      return;
    }
  }
  bool canVisitAllRooms(vector<vector<int>> &rooms) {
    int n = rooms.size();
    int sumj=n*(n+1)/2;
    vector<int> isvis(n, 0);
    dfs(rooms, isvis, 0);
    
    for(auto i:isvis){
      if(!i){
        return false;
      }
    }
    return true;
    ;
  }
};
