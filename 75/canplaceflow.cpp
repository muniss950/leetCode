

#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
      bool res=false;
      int len=flowerbed.size();
      int count=0;
      int pos=1;
      for(int i=0;i<len;i+=pos){
        pos=1;
        if(flowerbed[i]){
            continue;
        }
        if(i!=len-1){
          if(flowerbed[i+1]){
            continue;
          }
        }
        if(i!=0){
          if(flowerbed[i-1]){
            continue;  
          }
        }
        count++;
        pos=2;
      }
      return(count>=n);  
    }
};
