#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <queue>
#include <stack>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
  int min = INT_MAX;
  bool found = false;
  int bfs(vector<vector<int>> grid, vector<vector<int>> rotten,
                          int countfresh) {
    queue<vector<int>> q;
    map<vector<int>, int> visited;
    for (auto i : rotten) {
      q.push(i);
    }
    int time = 0;

    while (!q.empty()) {
      int size = q.size();
      while (size--) {
        vector<int> node = q.front();
        int x = node[0];
        int y = node[1];
        q.pop();
        if (!visited[node]) {
          if ((x + 1) < grid.size() && grid[x + 1][y] == 1 &&!visited[{x+1,y}]) {
            grid[x + 1][y] = 2;
            countfresh--;
            q.push({x + 1, y});
          }
          if ((x - 1) >= 0 && grid[x - 1][y] == 1&&!visited[{x-1,y}]) {
            grid[x - 1][y] = 2;
            countfresh--;
            q.push({x - 1, y});
          }
          if ((y + 1) < grid[0].size() && grid[x][y + 1] == 1&&!visited[{x,y+1}]) {
            grid[x][y + 1] = 2;
            countfresh--;
            q.push({x, y + 1});
          }
          if ((y - 1) >= 0 && grid[x][y - 1] == 1&&!visited[{x,y-1}]) {
            grid[x][y - 1] = 2;
            countfresh--;
            q.push({x, y - 1});
          }
        }
        visited[node] = 1;
        if (!countfresh) {

          if (min > time) {
            min = time;
          }
          return min;
        }
      }
      time++;
    }
    return -1;

  }
  int orangesRotting(vector<vector<int>> &grid) {
    vector<vector<int>> rotten;
    int countfresh = 0;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == 2) {
          rotten.push_back({i, j});
        }
        if (grid[i][j] == 1) {
          countfresh++;
        }
      }
    }
    if (rotten.empty()) {
      for (auto i : grid) {
        for (auto j : i) {
          if (j == 1) {
            return -1;
          }
        }
      }
      return 0;
    }
    bool test = false;
    bool cantrav = false;

    return bfs(grid, rotten, countfresh);
  }
};
