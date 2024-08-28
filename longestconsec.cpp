#include <algorithm>
#include<bits/stdc++.h>
#include <iterator>
#include <strings.h>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      vector<int>hash(10e5,0);
      for(int i=0;i<nums.size();i++){
        hash[nums[i]]=1;
      }
      int max=0;
      for(int i=0;i<hash.size();i++){
        if(hash[i]){
          
        }

      }
        
    }
};
