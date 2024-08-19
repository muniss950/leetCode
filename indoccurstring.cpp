#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
      int len=haystack.size();
      int n=needle.size();
      if(len<n){
        return -1;
      }
      int pos=n-1;
      int temp;
      while(pos<len){
        temp=0;
        
        while(temp<n){
          if(needle[n-temp-1]!=haystack[pos-temp]){
            break;
          }
          temp++;
        }
        if(temp==n){
          return pos-n;
        }
      }
      return -1;
    
    }
};
