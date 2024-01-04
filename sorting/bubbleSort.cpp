#include <bits/stdc++.h>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr){
  int n=size(arr);
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j+1]<arr[j]){
        int temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
      }
    }
  }
}
int main(){
  vector<int>arr={3,13,4,6};
  for(auto i:arr){
    cout<<i<<" ";
  }
  cout<<endl;
  bubbleSort(arr);
  for(auto i:arr){
    cout<<i<<" ";
  }
  cout<<endl;
  
}
