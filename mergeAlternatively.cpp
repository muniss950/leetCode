
#include <bits/stdc++.h>

using namespace std;
string mergeAlternately(string word1, string word2) {
  string res;
  int n1=size(word1);
  int i;
  int n2=size(word2);
  for(i=0;i<n1;i++){
    res.push_back(word1[i]);
    if(i<n2)
    res.push_back(word2[i]);
  }
  while(i<n2){
    res.push_back(word2[i]);
    i++;
  }
  return res;
}
int main(){
  string a,b,c;
  cin>>a>>b;
  c=mergeAlternately(a,b);
  cout<<c;
}
