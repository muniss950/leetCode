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
int main(){
  vector<int>a{1,2,4,4};
  printComb(a,0,4);
}
