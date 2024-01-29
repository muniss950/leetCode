#include <bits/stdc++.h>
#include <vector>

using namespace std;
int call=0;

int mergeLargest(vector<int>arr){
  call++;
  int n=arr.size();
  if(n==1){
    return arr[0];
  }
  int x=n/2;
  vector<int>b,c;
  for(int i=0;i<x;i++){
    b.push_back(arr[i]);
  } 
  for(int i=x;i<n;i++){
    c.push_back(arr[i]);
  } 
  int n1=mergeLargest(b);
  int n2=mergeLargest(c);
  if(n1<n2){
    return n2;
  }
  return n1;
}
int main(){
  int x;
  cin>>x;
  vector<int>arr;
  int num;
  for(int i=0;i<x;i++){
    cin>>num;
    arr.push_back(num);
  }
  int res=mergeLargest(arr);
  cout<<res<<endl;
  cout<<call<<endl;
}
