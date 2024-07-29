

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
  vector<int> asteroidCollision(vector<int> &asteroids) {
    stack<int> stack, temp;
    vector<int> res;
    int l = asteroids.size();
    int lastneg = -1;
    int curr;
    bool flag = true;
    for (int i = 0; i < l; i++) {
      if (asteroids[i] < 0) {
        flag = true;
        curr = i - 1;
        while (!stack.empty()) {
          if (stack.top() == abs(asteroids[i])) {
            stack.pop();
            flag = false;
            break;
          } else if (stack.top() < abs(asteroids[i])) {
            stack.pop();
          } else {
            flag = false;
            break;
          }
        }
        if (flag) {
          while (!stack.empty()) {
            temp.push(stack.top());
            stack.pop();
          }
          while (!temp.empty()) {
            res.push_back(temp.top());
            temp.pop();
          }
          res.push_back(asteroids[i]);
        }
      } else {
        stack.push(asteroids[i]);
      }
    }
    while (!stack.empty()) {
      temp.push(stack.top());
      stack.pop();
    }
    while (!temp.empty()) {
      res.push_back(temp.top());
      temp.pop();
    }
    return res;
  }
};
