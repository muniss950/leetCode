#include <bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      int m=arr.back();
      vector<int>hash(m+k+1,0);
      for(int i=0;i<arr.size();i++){
        hash[arr[i]]=1;
      }
      for(int i=0;i<hash.size();i++){
        if(!hash[i]){
          k--;
        }
        if(k==0){
          return i;
        }
      }
        
      return -1;
    }
};
