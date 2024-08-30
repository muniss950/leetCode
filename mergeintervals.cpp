#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <list>
#include <queue>
#include <strings.h>
#include <system_error>
#include <vector>

using namespace std;
class Solution {
public:
  static bool compare(vector<int> a, vector<int> b) { return a[1] < b[1]; }
  vector<vector<int>> merge(vector<vector<int>> &intervals) {
    sort(intervals.begin(), intervals.end(), compare);
    for (auto i : intervals) {
      cout << i[0] << " " << i[1] << endl;
    }
    cout<<endl;
    priority_queue<int, vector<int>, greater<int>> minarr;
    priority_queue<int> maxarr;
    for (int i = 0; i < intervals.size(); i++) {
      minarr.push(intervals[i][0]);
      maxarr.push(intervals[i][1]);
    }

    vector<vector<int>> ans;
    int i = 0;
    while (i < intervals.size() && !minarr.empty() && maxarr.empty()) {
      // cout<<i<<endl;
      int temp = i;
      if (i == intervals.size() - 1) {
        ans.push_back(intervals[i]);
        break;
      }
      while (i < intervals.size() && intervals[i][0] > minarr.top() &&
             intervals[i][1] < maxarr.top()) {
        i++;
      }
      while (i < intervals.size() - 1 &&
             intervals[i][1] >= intervals[i + 1][0]) {
        i++;
      }
      cout << temp << " " << i << endl;
      ans.push_back({min(intervals[temp][0], intervals[i][0]),
                     max(intervals[temp][1], intervals[i][1])});
      i++;
    }
    return ans;
  }
};
