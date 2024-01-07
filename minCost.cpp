
#include <bits/stdc++.h>
#include <vector>

using namespace std;
int minCost(vector<vector<int>> arr,int l,int w){
  int cost;
  
  return cost;

}
int main(){
  int l,w;
  cin>>l>>w;
  vector<vector<int>>arr;
  for(int i=0;i<l;i++){
    for(int j=0;j<w;j++){
      cin>>arr[i][j];
    }
  }
  int a=minCost(arr,l,w);
  cout<<a;
}
