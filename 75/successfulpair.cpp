#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <memory_resource>
#include <ostream>
#include <queue>
#include <stack>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
  vector<int> ans;
  vector<int> successfulPairs(vector<int> &spells, vector<int> &potions,
                              long long success) {
    sort(potions.begin(), potions.end());
    for (auto num : spells) {
      int start = 0;
      int end = potions.size() - 1;
      int ind = (end - start) / 2;
      while (start <= end) {
        ind = start + (end - start) / 2;
        if (num * potions[ind] < success) {
          if (num * potions[ind + 1] >= success) {
            ind++;
            break;
          }
        }
        if (num * potions[ind] == success) {
          break;
        } else if (num * potions[ind] > success) {
          end = ind - 1;
          ;
        } else {
          start = ind + 1;
        }
      }

      ans.push_back(potions.size() - ind);
    }
    return ans;
  }
};
