

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
  int count=0;
  void findans(TreeNode* node,int max){
    if(node==nullptr){
      return;
    }
    if(node->val>max){
      count++;
    }
      findans(node->left, node->val);
      findans(node->right, node->val);
  }
  int goodNodes(TreeNode *root) {
    findans(root,root->val);
    return count;
  }
};
