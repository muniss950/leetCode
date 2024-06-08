#include <algorithm>
#include<bits/stdc++.h>
#include <iterator>
#include <strings.h>
#include <vector>

using namespace std;

int solve(int n,int k, vector<int> h ){
  int slices=0;
  sort(h.begin(),h.end());
  vector<int>diff;
  for(int i=0;i<n;i++){
    diff.push_back(h[i]-h[0]);
  }
  vector<int>dindex;
  for(int i=1;i<n;i++){
    if(diff[i]!=diff[i-1]){
      dindex.push_back(i);
    }
  }
  while (!dindex.empty()) {
    int cost=0;
    int start_ind=dindex.size()-1;;
    int ind=diff[start_ind-1];
    int flag=0;
    while(cost<k){
      start_ind--;
      ind=diff[start_ind-1];
      for(int j=dindex[start_ind];j<n;j++){
        cost+=diff[j]-diff[ind];
        if(cost>k){
          break;
        }  
      }
      // dindex.pop_back();
    }
    for(int i=dindex[start_ind];i<n;i++){
      diff[i]=diff[ind];
    }
    while(dindex[start_ind]!=dindex.back()){
      dindex.pop_back();
    }
    slices++;
  }
   return slices; 
}

int main(){
  int n,k;
  cin>>n>>k;
  vector<int>v;
  for(int i=0;i<k;i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  cout<<solve(n,k,v)<<endl;
}
