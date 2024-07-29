
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <cstdlib>
#include <iomanip>
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
  int maxLevelSum(TreeNode *root) {
    queue<TreeNode *> q;
    q.push(root);
    int n;
    int max=0,sum=0;
    while (!q.empty()) {
      n = q.size();
      for (int i = 0; i < n; i++) {
        
        TreeNode *node = q.front();
        cout << q.front()->val << " ";
        sum+=q.front()->val;
        q.pop();
        if (node->left != nullptr) {
          q.push(node->left);
        }
        if (node->right != nullptr) {
          q.push(node->right);
        }
        if(i==n-1){
          if(max<sum){
            max=sum;
          }
          sum=0;
          cout<<endl;
        }
      }
    }
    return max;
  }
};
