#include <algorithm>
#include<bits/stdc++.h>
#include <iterator>
#include <strings.h>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
public:
  string helper(vector<string>strs,int pos){
    string temp=strs[0];
    for(auto i:strs){
      if(pos<i.size() && i[pos]!=temp[pos]){
        return strs[0].substr(0,pos);
      }
    }
    return helper(strs, pos+1);
    
  }
    string longestCommonPrefix(vector<string>& strs) {
        return helper(strs,0);
    }
};
