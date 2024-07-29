struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  ListNode *deleteMiddle(ListNode *head) {
    int size = 1;
    ListNode *temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
      size++;
    }
    cout << size << endl;
    if(size==1){
    //   free(head);
      head=nullptr;
      return head;
    }
    temp = head;
    int ind = 0;
    int mid;
    if (size % 2 == 0) {
      mid = (size / 2) + 1;
    } else {
      mid = (size + 1) / 2;
    }
    ListNode* prev;
    while (ind !=mid){
      prev=temp;
      temp=temp->next;
      ind++;
    }
    prev->next=temp->next;
    // free(temp);
    return head;
  }
};
