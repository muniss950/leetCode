#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
  int ans = 0;
  int numIslands(vector<vector<char>> &grid) {
    vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), 0));
    queue<pair<int, int>> q;
    visited[0][0] = 1;
    q.push({0, 0});
    pair<int, int> curr;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (!visited[i][j] && grid[i][j] == '1') {
          while (!q.empty()) {
            curr = q.front();
            q.pop();
            int i = curr.first;
            int j = curr.second;
            visited[i][j]=1;
            grid[i][j]='0';
            if (i-1>0 && !visited[i - 1][j] &&grid[i-1][j]=='1') {
              q.push({i - 1, j});
            }
            if (j-1>0 && !visited[i][j - 1]&&grid[i][j-1]=='1') {
              q.push({i, j - 1});
            }

            if (i + 1 < grid.size() && !visited[i + 1][j] &&grid[i+1][j]=='1') {
              q.push({i + 1, j});
            }
            if (j + 1 < grid[0].size() && !visited[i][j + 1]&&grid[i][j+1]=='1') {
              q.push({i, j + 1});
            }
          }
          ans++;
        }
      }
    }
    return ans;
  }
};
