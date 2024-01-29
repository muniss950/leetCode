#include <bits/stdc++.h>
#include <vector>

using namespace  std;

int  lomutoPartition(vector<int> arr,int l,int r){
  int s=l;
  int p=arr[l];
  for(int i=l+1;i<r;i++){
    if(arr[i]<p){
      s++;
      int temp=arr[s];
      arr[s]=arr[i];
      arr[i]=temp;
    }
  }
  int temp=arr[s];
  arr[s]=arr[l];
  arr[l]=temp;
  // int n=size(arr);
  // for(int i=0;i<n;i++){
  //   cout<<arr[i]<<" ";
  // }
  // cout<<endl;
  return s;
}

int quickSelect(vector<int>arr,int l,int r,int k){
  int s;
  s=lomutoPartition(arr,l,r);
  if(s==k)
    return arr[s];
  else if(s>l+k-1)
    return quickSelect(arr,l,s-1,k);
  else {
    return quickSelect(arr,s+1,r,k-1-s);
  }

}
int main(){
  int size;
  cin>>size;
  vector<int>arr;
  for(int i=0;i<size;i++){
    int x;
    cin>>x;
    arr.push_back(x);
  }
  int x=quickSelect(arr,0,size-1,3);
  cout<<x<<endl;
}
