#include<bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;
class Solution {
public:
  static  bool compare(const vector<int>&a,const vector<int>&b){
        return a[0]<b[0];
    }
  int helper(vector<vector<int>>pairs,int curr,int pos){
    cout<<curr<<endl;
    if(pos>=pairs.size()-1){
      return curr;
    }
    int max=0;
    for(int i=pos+1;i<pairs.size();i++){
      int temp=0;
      if(pairs[pos][1]<pairs[i][0]){
        temp=helper(pairs, curr+1, i);
      }
      if(temp>max){
        max=temp;
      }
    }
    return max;
  }
    int findLongestChain(vector<vector<int>>& pairs) {    
      sort(pairs.begin(),pairs.end(),compare);
      return helper(pairs, 1, 0);
    }
};
