
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <set>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      sort(arr.begin(),arr.end());
      unordered_set<int>count_set;
      vector<int>count_vec;
      int l=arr.size(); 
      int i=1;
      int count=1;
      while(i<l){
        if(arr[i]!=arr[i-1]){
          count_set.insert(count);
          count_vec.push_back(count);
          i++;
          continue;
        } 
        count++;
        i++;
      }
      if((count_vec.size())==(count_set.size())){
        return true;
      }
      return false;
    }
};
