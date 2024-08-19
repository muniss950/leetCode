#include <bits/stdc++.h>
#include <unistd.h>
#include <vector>

using namespace std;
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int rst = 0;
    int rend = m;
    int rmid = (rend - rst) / 2;
    int isthere=false;
    while (rend>rst) {
      int rmid = (rend - rst) / 2;
      if (target <= matrix[rmid][n - 1] && target >= matrix[rmid][0]) {
        isthere=true;
        break;
      }

      if (target < matrix[rmid][0]) {
        rend=rmid-1;
      }
      if (target > matrix[rmid][n - 1]) {
        rst=rmid+1;
      }
      cout<<rst<<" "<<rend<<endl;
    }
    
    int cst = 0;
    int cend = m;
    int cmid;
    while (cend>cst) {
      int cmid = (cend - cst) / 2;
      if (target ==matrix[rmid][cmid]) {
        return true;
      }
      if (target < matrix[rmid][cmid]) {
        cend=cmid;
      }
      if (target > matrix[rmid][cmid]) {
        cst=cmid;
      }
      cout<<cst<<" "<<cend<<endl;
    }
    return false;
  }

};

#include <bits/stdc++.h>
#include <unistd.h>
#include <vector>

using namespace std;
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int rst = 0;
    int rend = m;
    int rmid = (rend - rst) / 2;
    int isthere=false;
    while (rend>rst) {
      int rmid = (rend - rst) / 2;
      if (target <= matrix[rmid][n - 1] && target >= matrix[rmid][0]) {
        isthere=true;
        break;
      }

      if (target < matrix[rmid][0]) {
        rend=rmid;
      }
      if (target > matrix[rmid][n - 1]) {
        rst=rmid;
      }
      cout<<rst<<" "<<rend<<endl;
    }
    return isthere;
  }

};
