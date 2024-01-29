#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> arr;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr.push_back(x);
  }
  vector<int>res;
  for(int i=0;i<n-1;i++){
    int x;
    x=arr[i]^arr[i+1];
    cout<<x<<" ";
  }
  cout<<endl;
 
}
