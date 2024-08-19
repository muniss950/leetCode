#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <stack>
#include <stdexcept>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
  vector<int> dailyTemperatures(vector<int> &temperatures) {
    int start = 0;
    int curr = 0;
    int n = temperatures.size();
    stack<int> st;
    vector<int> ans(n, 0);
    st.push(0);
    for (int i = 1; i < temperatures.size(); i++) {
      if (temperatures[i] < temperatures[st.top()]) {
        st.push(i);
      } else {
        while (!st.empty() && temperatures[st.top()] < temperatures[i]) {
          int index = st.top();
          ans[index] = i - index;
          st.pop();
        }
        st.push(i);
      }
    }
    return ans;
  }
};
