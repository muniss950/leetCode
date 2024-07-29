#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *oddEvenList(ListNode *head) {
    ListNode *oddhead = head, *evenhead = head->next;
    ListNode *temp = oddhead;
    ListNode *foo = evenhead;
    ListNode *node = head->next->next;
    while (node != nullptr) {
      temp->next = head;
      foo->next = head->next;
      temp = temp->next;
      foo = foo->next;
      if(node->next==nullptr){
        break;
      }
      node = node->next->next;
    }
    temp->next = evenhead;
    return oddhead;
  }
};
