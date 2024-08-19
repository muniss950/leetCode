#include <algorithm>
#include <bits/stdc++.h>
#include <set>
using namespace std;
class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n=matrix[0].size();
    cout<<m<<" "<<n<<endl;    
    int size;
    if(m>n){
        size=m;
    }
    else{
        size=n;
    }
    vector<int> tosetrow(m, 0);
    vector<int> tosetcol(n, 0);
    for (int i = 0; i < m; i++) {
      if (!tosetrow[i]) {
        for (int j = 0; j < n; j++) {
          if(matrix[i][j]==0){
            tosetrow[i]=1;
            tosetcol[j]=1;
          }
        }
      }
    }
    for(int i=0;i<tosetrow.size();i++){
      if(tosetrow[i]){
        for(int j=0;j<n;j++){
          matrix[i][j]=0;
        }
      }
    }
    for(int i=0;i<tosetcol.size();i++){
      if(tosetcol[i]){
        for(int j=0;j<m;j++){
          matrix[j][i]=0;
        }
      }
    }
    return;
  }
};
