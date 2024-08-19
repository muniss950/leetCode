
#include <bits/fs_fwd.h>
#include <bits/stdc++.h>
#include <list>
#include <random>
#include <vector>

using namespace std;

// /**

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    if (l2 == nullptr) {
      if (l1!=nullptr && l1->val >= 10) {
        int sum=l1->val;
        l1->val = sum % 10;
        if (l1->next != nullptr) {
          l1->next->val += sum / 10;
          addTwoNumbers(l1->next, l2);
        } else {
          ListNode *temp = new ListNode();
          temp->val = sum / 10;
          l1->next = temp;
          addTwoNumbers(l1->next, l2);
        }
      }
      return l1;
    }
    if (l1->next == nullptr) {

      ListNode* temp=new ListNode();
      l1->next = temp;;
    }

    int sum = l1->val + l2->val;
    l1->val = sum % 10;
    if (sum >= 10) {
      if (l1->next == nullptr) {
        ListNode *temp = new ListNode();
        temp->val = sum / 10;
        l1->next = temp;
      } else {
        l1->next->val += sum / 10;
      }
    }
    cout << l1->val << endl;

    addTwoNumbers(l1->next, l2->next);
    return l1;
  }
};
