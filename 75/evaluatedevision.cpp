
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;

class Solution {
public:
  vector<double> ans;
  double dfs(map<string, map<string, double>> al, string dividend,
             string divisor) {
    if (al.find(dividend) == al.end() || al.find(divisor) == al.end()) {
      // ans.push_back(-1.00);
      return -1;
    }
    if (dividend == divisor) {
      return 1;
    }
    if (al.find(dividend) != al.end() &&
        al[dividend].find(divisor) != al[dividend].end()) {
      // ans.push_back(al[dividend][divisor]);
      cout<<al[dividend][divisor]<<endl;
      return al[dividend][divisor];
    }
    double temp;
    for (auto i : al[dividend]) {
      temp = dfs(al,  i.first,divisor);
      if (temp != -1) {
        cout<<temp<<" ";
        return temp * i.second;
      }
    }
    return -1;
  }
  vector<double> calcEquation(vector<vector<string>> &equations,
                              vector<double> &values,
                              vector<vector<string>> &queries) {
    map<string, map<string, double>> al;
    int n = values.size();
    string key;
    string end;
    double weight;
    for (int i = 0; i < n; i++) {
      key = equations[i][0];
      end = equations[i][1];
      weight = values[i];
      al[key][end] = weight;
      al[end][key] = 1 / weight;
    }
    int size = al.size();
    for (auto i = al.begin(); i != al.end(); i++) {
      cout << i->first << ": " << endl;
      for (auto j = i->second.begin(); j != i->second.end(); j++) {
        cout << j->first << " " << j->second << endl;
      }
    }
    string dividend;
    string divisor;
    for (int i = 0; i < queries.size(); i++) {
      dividend = queries[i][0];
      divisor = queries[i][1];
      ans.push_back(dfs(al, dividend, divisor));
    }
    return ans;
  }
};
