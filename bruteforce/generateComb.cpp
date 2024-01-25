#include <bits/stdc++.h>

using namespace std;

void generateComb(string str,int index){
  int n=size(str);
  if(index==n-1){
    return;
  }
  // str+=index;
  string test;
  test=str.substr(index);
  cout<<test<<endl;
  for(int i=0;i<n;i++){
    generateComb(test,index+1);
  }
}

int main(){
  string a;
  cin>>a;
  // a=a.substr(1);
  // cout<<a;
  generateComb(a,0);

}
