#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    bool isdivide(string a,string div){
      int l=div.size();
      int len=a.size();
      if(len%l!=0){
        return false; 
      }
      int j=0;
      for(int i=0;i<len;i++){
        if(j==l){
          j=0;
        }
        if(div[j]!=a[i]){
          return false;
        }
        j++;
      }
      return true;
    }
    string gcdOfStrings(string str1, string str2) {
        string div;
        string res="";
        int l=str1.size();
        int r=str2.size();
        if(l>r){
          div=str2;
        }
        else{
          div=str1;
        }
        int i=1;
        string d=div.substr(0,i);
        while(i<=(div.size())){
          if(isdivide(str1,d) && isdivide(str2,d)){
            res=d;
          } 
          cout<<i<<endl;
          // cout<<d<<endl;
          i++;
          d=div.substr(0,i);
        }
        // cout<<isdivide("ABCABC", "ABCABCABC")<<endl;
        // res=d;
        // // res="dgdf";
        // 
        return res;
    }
};
int main (int argc, char *argv[]) {
  Solution foo=Solution();
  cout<<foo.gcdOfStrings("ABCABCABC", "ABC")<<endl;
  return 0;
}
