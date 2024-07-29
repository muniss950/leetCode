#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <ostream>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
  int equalPairs(vector<vector<int>> &grid) {
    int count = 0;
    int n=grid.size();
    bool flag = true;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        flag = true;
        // count=0;
        for (int k = 0; k < n; k++) {
          cout<<"i="<<i<<"j="<<j<<"k="<<k<<endl;
          cout<<grid[i][k]<<" "<<grid[k][j]<<endl;
          if (grid[i][k] != grid[k][j]) {
            flag = false;
            cout<<"Test"<<endl;
            break;
          }
        }
        if (flag) {
          count++;
        }
      }
    }
    return count;
  }
};
int main (int argc, char *argv[]) {
  int n;
  cin>>n;
  vector<vector<int>>test;
  for(int i=0;i<n;i++){
    vector<int>a(n,0);
    for(int j=0;j<n;j++){
      int temp;
      cin>>temp;
      a[j]=temp;
    }
    test.push_back(a);
  } 
  // for(auto i:test){
  //   for(auto j: i){
  //     cout<<j<<" ";
  //   }
  //   cout<<endl;
  //
  // }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<test[i][j]<<" ";
    }
    cout<<endl;
  }
  Solution foo=Solution();
  cout<<foo.equalPairs(test);
  return 0;
}
