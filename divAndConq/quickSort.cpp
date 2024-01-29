
#include <bits/stdc++.h>

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

void quickSort(vector<int>&arr,int l,int r){
  if(l>r)
    return;
  int s=lomutoPartition(arr,l,r);
  quickSort(arr,l,s-1);
  quickSort(arr,s,r);
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
  quickSort(arr,0,size);
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
