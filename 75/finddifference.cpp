#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
  vector<int>diff(vector<int>a,vector<int>b){
    
    int l=a.size();
    int r=b.size();
    int index=0;
    set<int>sa;
    set<int>sb;
    for(int i=0;i<l;i++){
      sa.insert(a[i]); 
      cout<<sa[i];
    }
    for(int i=0;i<r;i++){
      sb.insert(b[i]); 
    }
  }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      sort(nums1.begin(),nums1.end());
      sort(nums2.begin(),nums2.end());
       vector<vector<int>>res;
       res.push_back(diff(nums1,nums2));
       res.push_back(diff(nums2,nums1));
       return res;
    }
};
