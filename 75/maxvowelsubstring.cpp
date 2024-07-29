
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
  int maxVowels(string s, int k) {
    int l = s.size();
    vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};
    vector<int> countvow(l, 0);
    int temp = 0;
    for (int i = 0; i < l; i++) {
      for (auto ch : vowel) {
        if (s[i] == ch) {
          ++temp;
          break;
        }
      }
      countvow[i]=temp;
    }
    // for(auto i:countvow){
    //   cout<<i<<endl;
    // }
    int max = INT_MIN;
    int foo = countvow[k - 1];
    for (int i = k; i < l; i++) {
      if (foo <( countvow[i] - countvow[i - k])) {
        foo = countvow[i] - countvow[i - k];
        // cout<<"test";
      }
      // cout<<"foo: "<<foo<<endl;
    }
    return foo;
  }
};
int main (int argc, char *argv[]) {
  string s;
  int k;
  cin>>s;
  cin>>k;
  Solution foo=Solution();
  cout<<foo.maxVowels(s,k)<<endl;
  return 0;
}
