#include <bits/stdc++.h>
#include <vector>
using namespace std;

void selectSort(vector<int>& arr){
  int n=size(arr);
  int min;
  int temp;
  for(int i=0;i<n;i++){
    min=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min]){
        min=j;
      }
    }
    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
  }
}
int main(){
  vector<int>arr={3,45,1,7};
  for(auto i :arr){
    cout<<i<<" ";
  }
  cout<<endl;
  selectSort(arr);
  for(auto i :arr){
    cout<<i<<" ";
  }
}
