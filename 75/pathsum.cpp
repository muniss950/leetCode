
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
  int count = 0;
  void helper(TreeNode *root, int targetSum) {
    if(targetSum==0){
      count++;
      return;
    }
    if(root->left!=nullptr)
      helper(root,targetSum-root->val);
    if(root->right!=nullptr)
      helper(root,targetSum-root->val);
  }
  int pathSum(TreeNode *root, int targetSum) {
    if(!root){
      return count;    
    }else{
      helper(root,targetSum);
      pathSum(root->left,targetSum);
      pathSum(root->right,targetSum);
      // helper(root->left,targetSum-root->val);
      // helper(root->right,targetSum-root->val);
    }
    return count;
  }
};
