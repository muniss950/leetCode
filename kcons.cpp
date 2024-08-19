#include <algorithm>
#include<bits/stdc++.h>
#include <iterator>
#include <strings.h>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
public:
  int ans=0;
  void helper(string s,int k,int pos){
    if(pos==s.size()){
      return;
    }
    for(int i=0;i<s.size()-pos;i++){
      string curr=s.substr(pos,i+1);
      int zero=0,one=0;
      for(auto j:curr){
        if(j=='0'){
          zero++;
        }
        else{
          one++;
        }
      }
      if(zero<=k||one<=k){
        ans++;
      }
    }
    
    helper(s, k, pos+1);
  }
    int countKConstraintSubstrings(string s, int k) {
        
      helper(s,k,0);
      return ans;
    }
};
