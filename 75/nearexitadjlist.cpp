

#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <stdexcept>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;

#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;

class Solution {
public:
  bool found = false;
  int min = INT_MAX;

  bool isBorder(vector<int> query, int row, int col) {
    int i = query[0], j = query[1];
    return i == 0 || j == 0 || i == row || j == col;
  }
  void bfs(map<vector<int>, vector<vector<int>>> al, vector<int> query, int row,
           int col) {

    queue<vector<int>> q;
    q.push(query);
    vector<int> node;
    map<vector<int>, int> visited;
    map<vector<int>, int> distance;
    int length = 1;
    while (!q.empty()) {
      int size = q.size();
      while (size--) {
        node = q.front();
        q.pop();
        for (auto adj : al[node]) {
          if (!visited[adj]) {

            visited[adj] = 1;
            distance[adj] = length;
            if (isBorder(adj, row, col)) {
              found = true;
              if (min > length) {
                min = length;
              }
            }
            q.push(adj);
          }
        }
      }
      length++;
    }
  }
  int nearestExit(vector<vector<char>> &maze, vector<int> &entrance) {

    map<vector<int>, vector<vector<int>>> al;
    for (int i = 0; i < maze.size(); i++) {
      for (int j = 0; j < maze[0].size(); j++) {
        if (maze[i][j] == '.') {
          if ((i + 1) < maze.size() && maze[i + 1][j] == '.') {
            al[{i, j}].push_back({i + 1, j});
          }
          if ((i - 1) >= 0 && maze[i - 1][j] == '.') {
            al[{i, j}].push_back({i - 1, j});
          }
          if ((j + 1) < maze[0].size() && maze[i][j + 1] == '.') {
            al[{i, j}].push_back({i, j + 1});
          }
          if ((j - 1) >= 0 && maze[i][j - 1] == '.') {
            al[{i, j}].push_back({i, j - 1});
          }
        }
      }
    }
    for (auto i : al) {
      cout << "[" << i.first[0] << "," << i.first[1] << "]->";
      for (int j = 0; j < i.second.size(); j++) {
        cout << "[" << i.second[j][0] << "," << i.second[j][1] << "],";
      }
      cout << endl;
    }
    map<vector<int>, int> visited;
    bfs(al, entrance, maze.size() - 1, maze[0].size() - 1);
    if (!found) {

      return -1;
    }
    return min;
  }
};
