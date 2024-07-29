#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <functional>
#include <ios>
#include <iostream>
#include <queue>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  bool closeStrings(string word1, string word2) {
    int l=word1.size(),r=word2.size();
    if(l!=r){
      return false;
    }
    // priority_queue<char>t1,t2;
    // for(int i=0;i<l;i++){
    //   t1.push(word1[i]);
    //   t2.push(word2[i]);
    // }
    // for(int i=0;i<l;i++){
    //   char x=t1.top();
    //   char y=t2.top();
    //   if(x!=y){
    //     return false;
    //   }
    //   t1.pop();
    //   t2.pop();
    // }
    unordered_map<char,int>m1,m2;
    vector<int>x,y;
    vector<char>a,b;
    for(auto i:m1){
      a.push_back(i.first);
    }
    for(auto i:m2){
      b.push_back(i.first);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int t=a.size();
    for(int i=0;i<t;i++){
      if(a[i]!=b[i]){
        return false;
      }
    }
    for(int i=0;i<l;i++){
      m1[word1[i]]++;
      m2[word2[i]]++;
    }
    for(auto i:m1){
      x.push_back(i.second);
    }
    for(auto i:m2){
      y.push_back(i.second);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    int len=x.size();
    for(int i=0;i<len;i++){
      cout<<x[i]<<" "<<y[i]<<endl;
      if(x[i]!=y[i]){
        cout<<"false"<<endl;
        return false;
      }
    }
    return true;

  }
};
