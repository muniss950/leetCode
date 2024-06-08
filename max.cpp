#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int>a={12,123,2,1};
  int max=*max_element(a.begin(),a.end());
  a.push_back(12243);
  cout<<max<<endl;
}
