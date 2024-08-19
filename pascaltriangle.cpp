
#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>>ans(numRows);
      for(int i=0;i<numRows;i++){
        for(int j=0;j<i+1;j++){
          ans[i].push_back(1);
        }
      }
      for(int i=2;i<numRows-1;i++){
        for(int j=1;j<i;j++){
          ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
        }
      }
        
      return ans;
    }
};
