/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */



#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <queue>
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
    vector<int>ans;
    vector<int> rightSideView(TreeNode* root) {
      queue<TreeNode*>q;
      q.push(root);
      int n;
      TreeNode* temp;
      while(!q.empty()){
        n=q.size();
        for(int i=0;i<n;i++){
          temp=q.front();
          q.pop();
          if(temp->left!=nullptr){
            q.push(temp->left);
          }
          if(temp->right!=nullptr){
            q.push(temp->right);
          }
          if(i==n-1){
            ans.push_back(temp->val);
          }
        }
      }
      return ans;
    }
};
