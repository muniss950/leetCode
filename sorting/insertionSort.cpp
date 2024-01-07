
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr,int n){
  int index;
  int temp,key;
  for(int i=1;i<n;i++){ 
    key=arr[i];
    index=i-1;
    while(arr[index]>key &&index>=0){
      arr[index+1]=arr[index];
      index--;
    }
    arr[index+1]=key;
  }
}
int main(){
  int n;
  cin>>n;
  vector<int>arr;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    
    arr.push_back(x);
  }
  cout<<endl;
  insertionSort(arr,n);
  for(auto i:arr){
    cout<<i<<" ";
  }
  cout<<endl;
  
}

