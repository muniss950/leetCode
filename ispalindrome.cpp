#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdint>
#include <iterator>
#include <strings.h>
#include <vector>

using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
      int rev=0;
      int temp=x;
      int pos=1;
      while(temp){
        rev+=pos*temp%10;
        temp/=10;
        pos*=10;
      }
      return rev==x;
    }
};
