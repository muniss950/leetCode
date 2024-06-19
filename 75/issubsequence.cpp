#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
      if(l==0){
        return false;
      }
      int l=s.size();
      int r=t.size();
      int point=0;
      for(int i=0;i<r;i++){
        if(s[point]==t[i]){
          point++;
        }
        if(point==l-1){
          return true;
        }
      }
        
      return false;
    }
};
