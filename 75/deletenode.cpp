#include <cmath>
#include <cstddef>
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
  TreeNode *deleteNode(TreeNode *root, int key) {
    if(root==nullptr){
      return NULL;

    }
    if (root->val == key) {
      if (root->right != nullptr) {
        int temp = root->right->val;
        root->right->val = root->val;
        root->val = temp;
        delete root->right;
        return root;
      } else if (root->left != nullptr) {
        int temp = root->left->val;
        root->left->val = root->val;
        root->val = temp;
        delete root->left;
        return root;
      } else {
        delete root->left;
        return root;
      }
    } else if (root->val > key) {
      deleteNode(root->left, key);
    } else {
      deleteNode(root, key);
    }
    return root;
  }
};
