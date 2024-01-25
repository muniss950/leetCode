

#include <bits/stdc++.h>

using namespace std;
int  stringMatch(string word1, string word2) {
  int n,m;
  n=size(word1);
  m=size(word2);
  for(int i=0;i<n-m;i++){
    int j=0;
    int x=i;
    for(j=0;j<m;j++){
      if(word1[x]!=word2[j])
        break;
      x++;
    }
    if(j==m){
      return i;
    }
  }
  return -1;

}
int main(){
  string a,b;
  int c;
  cin>>a>>b;
  c=stringMatch(a,b);
  cout<<c;
}
