#include <bits/stdc++.h>
#include <vector>

using namespace std;

void mergeSort(vector<int> &arr,int start,int end){
  mergeSort(arr,0,end/2);
  mergeSort(arr,(end/2)+1,end);
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
  mergeSort(arr,0,n);
  for(auto i:arr){
    cout<<i<<" ";
  }
  cout<<endl;
  
}

