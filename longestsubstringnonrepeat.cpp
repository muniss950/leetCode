#include <algorithm>
#include<bits/stdc++.h>
#include <iterator>
#include <strings.h>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
public:
  unordered_map<char, int>map;
  int helper(string curr,string s,int start,int pos){
    cout<<curr<<endl;
    if(pos==s.size()){
      return pos-start+1;
    }
    if(map[s[pos]]==-1 ){
      map[s[pos]]=pos;
      int new_start=1;

      return max(pos-start,helper(curr, s, new_start,pos+1));
    } 
    if(map[s[pos]]>0 ){
      int new_start=map[s[pos]]+1;
      map[s[pos]]=pos;
      return max(pos-start,helper(curr, s, new_start,pos+1));
    } 
    else{
      map[s[pos]]=pos;
      return helper("", s,start,pos+1);
    }

  }
    int lengthOfLongestSubstring(string s) {
      map[s[0]]=-1;
        
      return helper("",s,0,0);
    }
};
