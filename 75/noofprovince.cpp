#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
  void helper(vector<vector<int>> &isConnected, vector<int> &visited,
                  vector<int> &temp, int i) {
    // if (isConnected[i][k]) {
    //   return;
    // }
    visited[i] = 1;
    // vector<int> temp;
    temp.push_back(i);
    for (int j=0;j< isConnected[i].size();j++) {
      if (!visited[i])
        helper(isConnected, visited,temp, j);
    }
  }
  vector<int> dfs(vector<vector<int>> &isConnected, vector<int> &visited, int i) {
    vector<int>temp;
    helper(isConnected, visited, temp,i);
    return temp;
  }
  int findCircleNum(vector<vector<int>> &isConnected) {
    int n = isConnected.size();
    if (n == 1) {
      return 1;
    }
    vector<int> visited(n, 0);
    vector<vector<int>> provinces;
    vector<int> temp;
    for (int i = 0; i < n; i++) {
      if (!visited[i]) {
        provinces.push_back(dfs(isConnected, visited, i));
        visited[i] = 1;
      }
    }

    return provinces.size();
  }
};
