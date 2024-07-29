
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <stack>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  int max = 0;
  // int length=0;
  bool wasLeft = false;
  void dfs(TreeNode *root, bool wasLeft, int length) {
    if (!root) {
      if (max < length) {
        max = length;
      }
      return;
    }
    if (wasLeft)
      dfs(root->right, false, length + 1);
    else
      dfs(root->left, true, length + 1);
  }
  int longestZigZag(TreeNode *root) {

    if (root) {
      dfs(root, wasLeft, 0);
      longestZigZag(root->left);
      longestZigZag(root->right);
    } else {
      return max;
    }
    return max;
  }
};
