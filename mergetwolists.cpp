#include <bits/stdc++.h>
#include <list>
#include <system_error>
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

class Solution {
public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {

    ListNode *ans = list1;
    while (list1 != nullptr && list2 != nullptr) {
      ListNode *temp = new ListNode();
      if (list1->val > list2->val) {
        temp->val = list2->val;
        temp->next = list1->next;
        list2 = list2->next;
      } else {
        list1 = list1->next;
      }
    }
    if (list2 != nullptr) {
      list1->next = list2;
    }

    return ans;
  }
};
