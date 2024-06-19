
#include <bits/stdc++.h>
#include <iterator>
#include <vector>
using namespace std;

void func(vector<vector<char>> a,int n,int m){
  int h,k;
  int i=1,j=1;
  while(a[i][j]=='.'){
    j++;
    if(j>m){
      i++;
      j=1;
      continue;
    }
    if(i>n){
      cout<<"-1"<<" "<<"-1"<<endl;
      return;
    }
  }
  while(a[i][j]=='#'){
    i++;
    if(i>n){
      h=i/2;
      k=j;
      break;
    }
  }
  cout<<h<<" "<<k<<endl;
  return;
}

int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>a(n+1);
    a[0].push_back({-1});
    for(int j=1;j<=n;j++){
      for(int p=1;p<=m;p++){
        char x;
        cin>>x;
        a[j].push_back(x);
      }
    }
    // for(int j=1;j<=n;j++){
    //   for(int p=1;p<=m;p++){
    //     cout<<a[j][p]<<" ";
    //   }
    // }
    func(a,n,m);
  }
}
