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
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    void findleaf(TreeNode* root,vector<int>& leaf){
      if(root->left==nullptr && root->right==nullptr){
        leaf.push_back(root->val);
        return;
      }
      if(root->left!=nullptr)
        findleaf(root->left, leaf);
      if(root->right!=nullptr)
        findleaf(root->right, leaf);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      vector<int>l1,l2;
       findleaf(root1,l1); 
       findleaf(root2,l2);
       if(l1.size()!=l2.size()){
         return false;
       }
       auto j=l2.begin();
       for(auto i: l1){
          if(i!=*j){
            return false;
          } 
          j++;
       }
       return true;
    }
};
