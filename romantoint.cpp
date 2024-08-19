#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
  int romanToInt(string s) {
    map<char, int> hash;
    hash['I'] = 1;
    hash['V'] = 5;
    hash['X'] = 10;
    hash['L'] = 50;
    hash['C'] = 100;
    hash['D'] = 500;
    hash['M'] = 1000;
    stack<char> stack;
    for (int i = 0; i < s.size(); i++) {
      stack.push(s[i]);
    }
    int num = 0;
    char bef = stack.top();
    stack.pop();
    while (!stack.empty()) {
      char temp = stack.top();
      if (hash[temp] >= hash[bef]) {
        num += hash[bef];
        bef = temp;
        stack.pop();
      } else {
        num += hash[bef] - hash[temp];
        bef = temp;
        stack.pop();
      }
    }
    num+=hash[bef];

    return num;
  }
};
