#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int maxArea(vector<int> &height) {
    int l = height.size();
    int left = 0;
    int right = 1;
    int max = INT_MIN;
    int area;
    while (left < right) {
      area = min(height[left], height[right]) * (right - left);
      if (area > max) {
        max = area;
      }
      if (height[left] == height[right]) {
        left++;
        right--;
      } else if (height[left] > height[right]) {
        right--;
      } else {
        left++;
      }
    }
    return max;
  }
};
int main() {
  Solution foo = Solution();
  int n;
  cin >> n;
  vector<int> x(n, 0);
  for (int i = 0; i < n; i++) {
    int temp;
    char y;
    cin >> temp >> y;
    x[i] = temp;
  }
  cout << foo.maxArea(x) << endl;
}
