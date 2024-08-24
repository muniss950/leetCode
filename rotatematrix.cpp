#include <algorithm>
#include<bits/stdc++.h>
#include <utility>

using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>ans(matrix.size(),vector<int>(matrix.size(),0));
        int n=matrix.size();
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            ans[i][j]=matrix[matrix.size()-1][matrix.size()-1];
          }
        }
        matrix=ans;
    }
};
