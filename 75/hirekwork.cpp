#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <functional>
#include <iostream>
#include <queue>
#include <regex>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  long long totalCost(vector<int> &costs, int k, int candidates) {
    long long sum = 0;
    int lmin = INT_MAX, rmin = INT_MAX, left = 0, right = costs.size() - 1;
    priority_queue<int, vector<int>, greater<int>> lheap, rheap;
    vector<int>ispop(costs.size(),0);
    for (int i = 0; i < k; i++) {
      while(lheap.size()!=candidates && left<costs.size()){
        lheap.push(costs[left++]);
      }
      while(rheap.size()!=candidates &&right>=0){
        lheap.push(costs[right--]);
      }
      if(lheap.top()<=rheap.top()){
        sum+=lheap.top();
        lheap.pop();
      }
      else{
        sum+=rheap.top();
        rheap.pop();
      }
      
    }
    return sum;
  }
};
