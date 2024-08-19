
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <stack>
#include <stdexcept>
#include <string>
#include <strings.h>
#include <unistd.h>
#include <vector>

using namespace std;
class StockSpanner {
public:
  vector<int> stocks;
  StockSpanner() {}

  int next(int price) { 
    int ans=1;
    int ind=stocks.size()-1;
    while(ind>=0 && stocks[ind]<price){
      ind--;
      ans++;
    }
    stocks.push_back(price);
    return ans;
  }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
