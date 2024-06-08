
#include<bits/stdc++.h>
using namespace std;

int solve(int n,int k, vector<int> h ){
    
    int flag=1;
    int slices=0;
    int min_ind,max_ind;
    while(true){
      flag=1;
        for(int i=1;i<n;i++){
            if(h[i]==h[i-1]){
                // cout<<"test"<<endl;
                continue;
            }
            flag=0;
            // cout<<"chod"<<endl;
            break;
        }
        if(flag){
            break;
        }
        
        
        sort(h.begin(),h.end());
        max_ind=h.size()-1;
        min_ind=0;
        int cost=0;
        int height=h[max_ind];
        int slice_height=height-1;
        int to_slice=1;

        while(true){
          // cout<<"hi"<<endl;
          int j=0;
          for(int i=h.size()-1;i>=0;i--){
            if(h[i]>slice_height)
              cost+=h[i]-slice_height;
            if(cost>k){
              to_slice=0;
              break;
            }
          }
          if(to_slice){
            for(int i=h.size()-1;i>=0;i--){
              if(h[i]>slice_height)
                h[i]=slice_height;
            }
            slice_height--;
          }
          else{
              break;
          }
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
