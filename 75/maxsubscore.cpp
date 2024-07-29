#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <functional>
#include <ios>
#include <iostream>
#include <queue>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
  long long maxScore(vector<int> &nums1, vector<int> &nums2, int k) {
    priority_queue<int, vector<int>, greater<int>> heap;
    vector<int> minprefix(nums2.size(), 0);
    for (int i = 0; i < nums2.size(); i++) {
      heap.push(nums2[i]);
      minprefix[i] = heap.top();
    }
    long long sum = 0;
    vector<long long int> sumprefix(nums1.size(), 0);
    for (int i = 0; i < nums1.size(); i++) {
      sum += nums1[i];
      minprefix[i] = sum;
    }
    int max=INT_MIN;
    long long temp;
    for(int i=0;i<nums1.size();i++){
      for(int j=i;j<nums1.size();j++){
        temp=
      }
    }
  }
};
