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
  vector<vector<string>> ans;
  vector<vector<string>> suggestedProducts(vector<string> &products,
                                           string searchWord) {

    int len = products.size();
    cout << len << endl;
    sort(products.begin(), products.end());
    for (auto i : products) {
      cout << i << ",";
    }
    cout << endl;
    int n = searchWord.size();
    for (int i = 0; i < n; i++) {
      ans.push_back({});
      string temp = searchWord.substr(0, i + 1);

      for (auto j : products) {
        if (j.size() < i) {
          continue;
        } else {
          if (temp == j.substr(0, i + 1)) {
            ans[i].push_back(j);
          }
        }
      }
    }

    return ans;
  }
};
