#include <bits/stdc++.h>
using namespace std;

void printComb(vector<int>arr,int index,int size){
  if(index==size){
    return;
  }
  for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
    printComb(arr,index+1,size);
  }
}

void printCombBitMask(vector<int>arr,int len){
  int n=1<<len;
  for(int i=0;i<n;i++){
    int j=0;
    while(j<len){
      if(i>>j&1)
          cout<<arr[j]<<" ";
      j++;
    }  
    cout<<endl;
  }
}
int main(){
  int x;
  vector<int>a{1,2,4,4};
  
  cin>>x;
  cout<<"Input: "<<x<<endl;
  printCombBitMask(a,4);
}
