#include <algorithm>
#include<bits/stdc++.h>
#include <iterator>
#include <strings.h>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
      int len=s.size();
      int ans=0;
      int i=len-1;
      while(i>=0 &&s[i]!=' '){
        i--;
        ans++;
      }
      return ans;
        
    }
};
