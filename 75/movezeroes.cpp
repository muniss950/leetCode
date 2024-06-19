#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=nums.size();
        int count=0;
        for(int i=0;i<l;i++){
          if(nums[i]==0){
            count++;
          }
        }
        int index=0;
        for(int i=0;i<l-count;i++){
          while(nums[index]!=0){
            index++;
          }
          if(index>)
          nums[i]=nums[index];
          index++;
        }
        for(int i=0;i<count;i++){
          nums[index]=0;
        }

    }
};
int main (int argc, char *argv[]) {
  Solution foo=Solution();
  // foo.moveZeroes(vector<int>{
  return 0;
}
