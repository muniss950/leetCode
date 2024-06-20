
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
 // */
class Solution {
public:
    int finddepth(TreeNode* node,int height){
      if(node==nullptr){
        return height;
      } 
      height++;
      int h1=finddepth(node->left,height);
      int h2=finddepth(node->right,height);
      height+=max(h1,h2);
      return height;
    }
    int maxDepth(TreeNode* root) {
       return finddepth(root,0); 
    }
};
int main (int argc, char *argv[]) {
  
  return 0;
}
