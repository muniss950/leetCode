#include <bits/stdc++.h>
#include <cmath>
#include <vector>

using namespace std;
class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix) {
    int n = matrix[0].size();
    int m = matrix.size();
    int x = m * n;
    vector<int> ans(m * n, 0);
    int i = 0, j = 0;
    int p = 0;
    int hor = +1, ver = 0;
    int rst = 0, cst = 0;
    for (int index = 0; index < x; index++) {
      cout << i << " " << j << endl;
      if (i < cst || j < rst || i == m || j == n) {
        index--;

        cout << endl;
        cout << hor << "," << ver << endl;
        cout << cst << "," << rst << "," << m << "," << n << endl;
        cout << endl;
        if (j == n) {
          cout << "a" << endl;
          j--;
          cst++;
          hor = 0;
          ver = +1;
          i += ver;
          j += hor;
          continue;
        }
        if (j < rst) {
          cout << "b" << endl;
          j++;
          m--;
          hor = 0;
          ver = -1;
          i += ver;
          j += hor;
          continue;
        }
        if (i == m) {
          cout << "c" << endl;
          i--;
          n--;
          hor = -1;
          ver = 0;
          i += ver;
          j += hor;
          continue;
        }
        if (i < cst) {
          cout << "d" << endl;
          i++;
          rst++;
          hor = +1;
          ver = 0;
          i += ver;
          j += hor;
          continue;
        }
      }
      ans[p] = matrix[i][j];
      p++;
      i += ver;
      j += hor;
    }
    return ans;
  }
};
