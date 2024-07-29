#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <stack>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;

class Solution {
public:
  bool isdigit(char x) {
    int t = x - '0';
    return t >= 0 && t < 10;
  }
  string decodeString(string s) {
    string res="";
    stack<char> stack;
    int l = s.size();
    string temp = "";
    string foo = "";
    int ind;
    int num = 0;
    int deg = 1;
    for (int i = 0; i < l; i++) {
      if (s[i] != ']') {
        stack.push(s[i]);
      } else {
        ind = i;
        while (stack.top() != '[') {
          temp = stack.top() + temp;
          stack.pop();
        }
        cout<<temp<<endl;
        stack.pop();
        while (isdigit(stack.top())) {
            cout<<(int)(stack.top() - '0')<<endl;
          num += deg * ((int)(stack.top() - '0'));
          deg *= 10;
          stack.pop();
          if (stack.empty()) {
            break;
          }
        }
        cout<<num<<endl;
        for(int j=0;j<num;j++){
          foo.append(temp);
        }
        for(auto i:foo){
          stack.push(i);
        }
        num=0;
        deg=1;
        temp="";
        foo="";
      }
    }
    temp="";
    while(!stack.empty()){
         temp = stack.top() + temp;
          stack.pop();
    }
    res.append(temp);
    return res;
  }
};
