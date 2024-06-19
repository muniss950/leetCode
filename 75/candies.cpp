#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      vector<bool> res;
      int len=candies.size();
      for(int i=0;i<len;i++){
        bool test=true;
        for(int j=0;j<len;j++){
          if(j==i){
            continue;
          }
          if(candies[j]>(candies[i]+extraCandies)){
            test=false;
            break;
          }

        }
        res.push_back(test);
      }
      return res; 
    }
};


