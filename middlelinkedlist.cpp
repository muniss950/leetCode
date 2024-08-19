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

#include <bits/stdc++.h>
#include <list>
#include <vector>

using namespace std;
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      if(head->next==nullptr){
        return head;
      }
      ListNode* end=head;
      int n=1;;
      while(end->next!=nullptr){
        end=end->next;
        n++;
      }
      int i=1;
      while(i!=n/2+(n%2)){
        head=head->next;
        i++;
      }
      return head;
    }
};
