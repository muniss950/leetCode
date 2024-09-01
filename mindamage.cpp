#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;
class Solution {
public:
  long long minDamage(int power, vector<int> &damage, vector<int> &health) {
    long long int sum = 0;
    for (auto i : damage) {
      sum += i;
    }
    sort(damage.begin(), damage.end());
    sort(health.begin(), health.end());
    long long int ans = 0;
    while (!health.empty()) {
      int index=health.size()-1;
      while(index>0  &&health[index]%power!=0){
        index--;
        while(index>=0 &&health[index]==0){
          index--;
        }
      }
      int x = health[index] / power;
      ans += x * sum;
      sum -= damage[index];
      damage[index]=0;
      health[index]=0;
    }
    return ans;
  }
};
