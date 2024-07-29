#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
  int calctime(vector<int> piles, int num) {
    int sum = 0;
    for (auto i : piles) {
      sum += i / num;
      if (i % num) {
        sum++;
      }
    }
    return sum;
  }
  int minEatingSpeed(vector<int> &piles, int h) {
    sort(piles.begin(), piles.end());
    int start = piles[0];
    int end = piles.back();
    int ans;
    while (start < end) {
      ans = start + (end - start) / 2;
      int tim = calctime(piles, ans);

      if (tim == h) {
        return ans;

      } else if (tim > h) {
        start = ans + 1;
      }

      else {
        end = ans - 1;
      }
    }
    return ans;
  }
};
