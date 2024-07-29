

#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <queue>
#include <stack>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
  int findKthLargest(vector<int> &nums, int k) {
    priority_queue<int> heap;
    for (auto i : nums) {
      heap.push(i);
    }
    while(k--!=0){
      heap.pop();
    }
    return heap.top();

  }
};
