

#include <algorithm>
#include <bits/stdc++.h>
#include <stack>
#include <vector>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
      stack<char>st;
      for(int i=0;i<s.size();i++){
        if(s[i]=='(' ||s[i]=='['||s[i]=='{'){
          st.push(s[i]);
        }
        else{
          if(s[i]==')'){
            if(st.top()!='('){
              return false;
            }
            else{
              st.pop();
            }
          }
          if(s[i]==']'){
            if(st.top()!='['){
              return false;
            }
            else{
              st.pop();
            }
          }
          if(s[i]=='}'){
            if(st.top()!='{'){
              return false;
            }
            else{
              st.pop();
            }
          }
        }

      }
        
      return true;
    }
};