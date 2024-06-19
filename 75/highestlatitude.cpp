#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int curalt=0;
       int res=0;
       int high=INT_MIN;
       int l=gain.size();
       for(int i=0;i<l;i++){
         curalt+=gain[i];
         if(curalt>high){
           high=curalt;
         }
       }
      res=high;
      return res;
    }
};
