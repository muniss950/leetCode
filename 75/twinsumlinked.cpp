
#include <bits/stdc++.h>
#include <queue>
#include <stack>

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
    int pairSum(ListNode* head) {
        int max=0;
        stack<int>stack;
        queue<int>queue;
        while(head!=nullptr){
          stack.push(head->val);
          queue.push(head->val);
          head=head->next;
        }
        int sum=0;
        while(!stack.empty()){
          sum=stack.top()+queue.front();
          if(sum>max){
            max=sum;
          }
          stack.pop();
          queue.pop();

        }
        return max;
    }
};
