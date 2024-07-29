
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int compress(vector<char> &chars) {
    int l = chars.size();
    int index = 0;
    int count = 1;
    char curr = chars[0];
    for (int i = 1; i < l + 1; i++) {
      if (i != l) {
        if (chars[i] == curr) {
          count++;
        } else {
          chars[index++] = curr;
          curr = chars[i];
          string s = to_string(count);
          for (auto j : s) {
            chars[index++] = j;
          }
        }
      }
      else{
          chars[index++] = curr;
          string s = to_string(count);
          for (auto j : s) {
            chars[index++] = j;
          }
      }
    }
    for (int i = index; i < l; i++) {
      chars.pop_back();
    }

    return chars.size();
  }
};
