#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <iostream>
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
  TreeNode *ans;
  bool dfs(TreeNode *root, int fval, int sval,int curr) {
    if(root->val==fval|| root->val==sval){
      curr++;
    }
    if(curr==2){
      return true;
    }
    bool t;
    t=dfs(root->left,fval, sval,curr);
    t=dfs(root->right,fval, sval,curr);
    return t;
  }
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if (root) {
      if(dfs(root, p->val, q->val,0)){
        return root;
      }
      lowestCommonAncestor(root->left, p, q);
      lowestCommonAncestor(root->right, p, q);
    }
    return NULL;
  }
};
