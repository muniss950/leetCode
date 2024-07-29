#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
#include <variant>
#include <vector>
using namespace std;

class Solution {
public:
  int count = 0;
  void dfs(vector<vector<int>> &graph, vector<int> &visited, int i) {

    // for(auto j:connections[i]){
    //   if(j!=i &&!visited[j]){
    //     count++;
    //     dfs(connections,visited,j);
    //     visited[j]=1;
    //   }
    // }
    if (visited[i]) {
      return;
    }
    visited[i] = 1;
    for (int j = 0; j < graph.size(); j++) {
      if (graph[i][j] && !visited[j]) {
        count++;
        dfs(graph, visited, j);
      }
    }
  }
  int minReorder(int n, vector<vector<int>> &connections) {
    vector<vector<int>> graph(vector(n, vector<int>(n, 0)));
    for (int i = 0; i < connections.size(); i++) {
      graph[connections[i][0]][connections[i][1]] = 1;
    }
    // for(auto i:graph){
    //   for(auto j:i){
    //     cout<<j<<" ";
    //   }
    //   cout<<endl;
    // }
    vector<int> visited(n, 0);
    bool flag = true;
    for (int i = 1; i < n; i++) {
      if (connections[0][i]) {
        flag = false;
        dfs(graph, visited, i);
      }
    }
    if (flag) {
      for (int i = 1; i < n; i++) {
        if(connections[i][0]){
          dfs(graph,, int i);
        }

      }
    }

    return count;
  }
};
