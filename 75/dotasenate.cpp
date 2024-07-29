
#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution {
public:
  string predictPartyVictory(string senate) {
    string res;
    queue<int> rad;
    queue<int> dir;
    string x = "Radiant", y = "Dire";
    for (int i = 0; i < senate.size(); i++) {
      if (senate[i] == 'R') {
        rad.push(i);
      } else {
        dir.push(i);
      }
    }
    int temp;
    while (!rad.empty() && !dir.empty()) {
      if (rad.front() < dir.front()) {
        dir.pop();
        temp = rad.front();
        rad.pop();
        rad.push(temp+senate.size());
      } else {
        rad.pop();
        temp = dir.front();
        dir.pop();
        dir.push(temp+senate.size());
      }
      if(rad.empty()){
        return "Dire";
      }
      if(dir.empty()){
        return "Radiant";
      }
    }

    return res;
  }
};
