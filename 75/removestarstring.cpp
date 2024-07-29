
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <ostream>
#include <stack>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
    string removeStars(string s) {
      stack<char>stack;
      int l=s.size();
      int t=0;
      for(int i=0;i<l;i++){
        if(s[i]!='*'){
          stack.push(s[i]);
          t++;
        }
        else{
          stack.pop();
          t--;
        }
      }
      char x;
      for(int i=t-1;i>=0;i--){
        x=stack.top();
        s[i]=x;
        stack.pop();
      }
      while(t!=s.size()){
        s.pop_back();

      }
      return s;
        
    }
};
