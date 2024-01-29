#include <bits/stdc++.h>

using namespace std;

void mergeArray(vector<int>&arr,vector<int>b,vector<int>c){
  int i=0;int j=0;
  int p=b.size();
  int q=c.size();
  int index=0;
  while(i<p && j<q){
    if(b[i]<=c[j]){
      arr[index++]=b[i++];
    }
    else{
      arr[index++]=c[j++];
    }
  }
  if(i==p){
    while(j<q){
      arr[index++]=c[j++];
    }
  }
  else{
    while(i<p){
      arr[index++]=b[i++];
    }
  }
}
void mergeSort(vector<int> &arr){
  int n=arr.size();
  if(n<1){
    return;
  } 
  vector<int>b,c;
  int x=n/2;
  for(int i=0;i<x;i++){
    b.push_back(arr[i]);
  }
  for(int i=x;i<n;i++){
    c.push_back(arr[i]);
  }
  mergeSort(b);
  mergeSort(c);
  mergeArray(arr,b,c);
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
  mergeSort(arr);
  for(int i=0;i<x;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}
