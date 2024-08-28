#include <bits/stdc++.h>
#include <list>
#include <strings.h>
#include <system_error>
#include <vector>

using namespace std;
class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    if(n==0){
        return;
    }
    if(m==0){
        for(int i=0;i<n;i++){
            nums1[i]=nums2[i];
        }
        return;
    }
    for (int i = n; i < m + n; i++) {
      nums1[i] = nums1[i - n];
        cout<<nums1[i]<<" ";
        nums1[i-n]=0;
    }
    cout<<endl;
    int x = m, y = 0;
    int index = 0;
    while (x < m + n && y < n && index < m + n) {
      if (nums1[x] < nums2[y]) {
        nums1[index++] = nums1[x];
        nums1[x]=0;
        x++;
        continue;
      }
      if (nums1[x] > nums2[y]) {
        nums1[index++] = nums2[y];
        y++;
        continue;
      }
    //   index++;
    }
    while (index<m+n &&y < n) {
      nums1[index++] = nums2[y++];
    }
    while (index<m+n&&x < m + n) {
      nums1[index++] = nums1[x++];
    }
  }
};
