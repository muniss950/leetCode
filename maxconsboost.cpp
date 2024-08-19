#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <vector>

using namespace std;
class Solution {
public:
  long long ans = 0;
  int helper(vector<vector<int>> arr, int curr, int sum, int pos) {
    if (pos == arr[0].size() - 2) {
      sum += arr[curr][pos + 1];
      ans = sum;
      return sum;
    }
    if (pos == arr[0].size() - 1) {
      ans = sum;
      return sum;
    }
    if (pos >= arr.size()) {
      ans = sum;
      return sum;
    }
    int ch1 = arr[curr][pos + 1] + arr[curr][pos + 2];
    int ch2 = arr[!curr][pos + 2];
    if (ch2 > ch1) {
      sum += ch2;
      curr = !curr;
    } else {
      sum += ch1;
    }
    int temp = helper(arr, curr, sum, pos + 2);
    return temp;
  }
  long long maxEnergyBoost(vector<int> &energyDrinkA,
                           vector<int> &energyDrinkB) {
    int curr;
    // if (energyDrinkA[0] > energyDrinkB[0]) {
    //   curr = 0;
    // } else {
    //   curr = 1;
    // }
    vector<vector<int>> arr;
    arr.push_back(energyDrinkA);
    arr.push_back(energyDrinkB);
    vector<int> memo(energyDrinkA.size()+1, -1);
    for (int i = energyDrinkA.size() - 1; i >= 0; i--) {
      memo[i] = max(helper(arr, curr, arr[curr][0], 0),
                    helper(arr, !curr, arr[!curr][0], 0));
    }
    return ans;
  }
};
