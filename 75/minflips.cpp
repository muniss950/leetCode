#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
  int minFlips(int a, int b, int c) {
    int aur = a | b;
    int count=0;
    int temp;
    while(c!=0){
      temp=(c%2) == (aur%2);
      if(temp){
        count++;
      }
      c=c>>1;
      aur=aur>>1;
    }
    return count;
  }
};
