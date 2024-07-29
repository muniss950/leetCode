
#include <algorithm>
#include <bits/stdc++.h>
#include <chrono>
#include <cstdint>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <numeric>
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
  TreeNode* findSuc(TreeNode* node){
    if(!node ||node==nullptr){
      return NULL;
    }
    if(!node->right){
      if(!node->left){
        return NULL;
      }
      return node->left;
    }
    TreeNode* suc=node->right;
    while(suc->left!=nullptr){
      suc=suc->left;
    } 

    return suc;
  }
  TreeNode *deleteNode(TreeNode *root, int key) {
    if (root) {
        cout<<"test"<<endl;
        if(key==root->val){
            cout<<root->val<<endl;
            return root;
        }
      TreeNode *l, *r,*temp,*suc;
      if (key < root->val) {
        l = deleteNode(root->left, key);
      }
      if (key > root->val) {
        r = deleteNode(root->right, key);
      }
      cout<<"test"<<endl;
        if(l){
            temp=l;
        }else if(r){
            temp=r;
        }
      cout<<temp->val<<endl;
      if(!temp){
        suc=findSuc(temp); 
        if(!suc){
            delete temp;
        }else{
            temp->val=suc->val;
            delete suc;
        }
        // return root;
      }
      return root;
    }
    return NULL;
  }
};
