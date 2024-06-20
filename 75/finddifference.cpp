#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int>diff(vector<int>a,vector<int>b) {
        vector<int>res;
        int l=a.size();
        int r=b.size();
        int index=0;
        bool flag=false;
        for(int i=0; i<r; i++) {
          int j=0;
          while(a[j]<b[i]){
            res.push_back(a[j]);
            j++;
          }
        }
        set<int>st;
        for(auto i:res){
          st.insert(i);
        }
        vector<int>ans;
        for(auto &i:st){
          ans.push_back(i);
        }
        return ans;
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
