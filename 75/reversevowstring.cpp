
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  bool isvowel(char a) {
    vector<char> vw = {'a', 'e', 'i', 'o', 'u'};
    for (auto i : vw) {
      if (i == a) {
        return true;
      }
    }
    return false;
  }
  string reverseVowels(string s) {
    string vow;
    string res;
    for (auto i : s) {
      if (isvowel(i)) {
        vow.push_back(i);
      }
    }
    cout << vow << endl;
    for (auto i : s) {
      if (!isvowel(i)) {
        res.push_back(i);
        continue;
      }
      cout << vow << endl;
      if (!vow.empty()) {
        char a = vow.back();
        res.push_back(a);
        vow.pop_back();
      }
    }
    return res;
  }
};
int main(int argc, char *argv[]) {
  Solution foo = Solution();
  cout << foo.reverseVowels("hello");
  return 0;
}
