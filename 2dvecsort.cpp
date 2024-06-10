#include <bits/stdc++.h>
#include <vector>

using namespace std;
int main(){
  vector<vector<int>>meetings={{2,1},{1,5},{23,0},{-1,214}};
  sort(meetings.begin(),meetings.end(),[] (const std::vector<int> &a, const std::vector<int> &b)
          {
              return a[0] < b[0];
          });
  for(auto x:meetings){
    for(auto y:x){
      cout<<y<<" ";
    }
    cout<<endl;
  }
}
