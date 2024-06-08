#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

bool compare(vector<int>a,vector<int>b){
  return a[0]<b[0];
}
int solve(int n,int k, vector<vector<int>> segments){
  sort(segments.begin(),segments.end(),compare);
  int res=0;
  vector<vector<int>>cover(segments.back()[0]);
  for(int i=0;i<n;i++){
    for(int j=segments[i][0];j<=segments[i][1];j++){
      cover[j].push_back(i);
    }
  }
  return res;
}
int main(){
  cout<<solve(3, 2, {{11,11}, {9,11},{7,8}, {8,9}, {7,8}, {9,11}, {7,9} })<<endl;
}
