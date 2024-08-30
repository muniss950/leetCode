#include <bits/stdc++.h>
#include <queue>
#include <utility>
#include <vector>

using namespace std;
class Solution {
public:
  void bfs(vector<vector<char>> &board, vector<vector<int>> visited, int i,
           int j) {
    if (visited[i][j]) {
      return;
    }
    queue<pair<int, int>> q;
    q.push({i, j});

    pair<int, int> curr;
    while (!q.empty()) {
      curr = q.front();
      q.pop();
      int i = curr.first;
      int j = curr.second;
      visited[i][j] = 1;
      board[i][j] = '0';
      if (i - 1 > 0 && !visited[i - 1][j] && board[i - 1][j] == 'O') {
        board[i - 1][j] = 'P';
        q.push({i - 1, j});
      }
      if (j - 1 > 0 && !visited[i][j - 1] && board[i][j - 1] == 'O') {
        board[i][j - 1] = 'P';
        q.push({i, j - 1});
      }

      if (i + 1 < board.size() && !visited[i + 1][j] &&
          board[i + 1][j] == 'O') {
        board[i + 1][j] = 'P';
        q.push({i + 1, j});
      }
      if (j + 1 < board[0].size() && !visited[i][j + 1] &&
          board[i][j + 1] == 'O') {
        board[i][j + 1] = 'P';
        q.push({i, j + 1});
      }
    }
  }
  void solve(vector<vector<char>> &board) {
    if (board.size() == 1 || board[0].size() == 1) {
      return;
      ;
    }
    vector<vector<int>> visited(board.size(), vector<int>(board[0].size(), 0));
    for (int i = 0; i < board[0].size(); i++) {
      if (board[0][i] == 'O')
        bfs(board, visited, 0, i);
      if (board[board.size() - 1][i] == 'O')
        bfs(board, visited, board.size() - 1, i);
    }
    for (int i = 0; i < board.size(); i++) {
      if (board[i][0] == 'O')
        bfs(board, visited,i,0);
      if (board[i][board.size()-1] == 'O')
        bfs(board, visited,i, board.size() - 1);
    }
    for (int i = 0; i < board.size(); i++) {
      for (int j = 0; j < board[0].size(); j++) {
        if (board[i][j] == 'P') {
          board[i][j] = 'O';
        } else {
          board[i][j] = 'X';
        }
      }
    }
  }
};
