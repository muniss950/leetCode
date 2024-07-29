

#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <ios>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int maxOperations(vector<int> &nums, int k) {
    int l = nums.size();
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = l - 1;
    int count = 0;
    long long int sum;
    while (nums[left] + nums[right] > k && right>=0) {
      right--;
    }
    while (left < right) {
      if (nums[left] + nums[right] == k) {
        count++;
        left++;
        right--;
      } else if (nums[left] + nums[right] < k) {
        left++;
      }
      else{
        right--;
      }
    }
    return count;
  }
};
int main(){
  Solution foo=Solution();
  int n;
  cin>>n;
  int k;
  cin>>k;
  vector<int>x(n,0);
  for(int i=0;i<n;i++){
    int temp;
    char y;
    cin>>temp>>y;
    x[i]=temp;
  }
  cout<<foo.maxOperations(x,k)<<endl;
}

