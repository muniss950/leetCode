#include <bits/stdc++.h>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr,int start,int size){

}

int main(){
  int n;
  cin>>n;
  vector<int>arr;
  int x;
  for(int i=0;i<n;i++){
    cin>>x;
    arr.push_back(x);
  }
  bubbleSort(arr,0,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
