#include <bits/stdc++.h>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
  int n = 10e5;
  cout << RAND_MAX;
  vector<int> test(n, 0);
  for (int i = 0; i < n; i++) {
    int temp = rand_r(10e4);
  }
}
