#include<bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> encoded) {
    vector<int>perm;
    int first=0;
    int n=encoded.size()+1;
    for (int i = 1; i <= n; i++) {
        first^=i;
    }
    for(int i=1;i<n;i+=2){
      if(i%2)
        first^=encoded[i];
    }
    perm.push_back(first);
    int element=first;
    for(int i=0;i<n-1;i++){
        
        perm.push_back(element^encoded[i]);
        element=element^encoded[i];
    }
  int size=perm.size(); 
  // for(int i=0;i<size;i++){
  //   cout<<perm[i]<<" ";
  // }
    return perm;
    
}


// vector<int> decode(vector<int> encoded) {
//     int val=0,val1=0,n=encoded.size();
//     vector<int>ans(n+1);
//     for(int i=1;i<=n+1;i++)
//     {
//         val1^=i;
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(i%2)
//         {
//             val^=encoded[i];
//         }
//     }
//     ans[0]=val^val1;
//     for(int i=1;i<=n;i++)
//     {
//         ans[i]=ans[i-1]^encoded[i-1];
//     }
//     return ans;
// }
int main(){
  int n;
  cin>>n;
  int x;
  vector<int>encoded;
  for(int i=0;i<n;i++){
   cin>>x;
   encoded.push_back(x);
  }
  vector<int>res;
  res=decode(encoded);

  for(int i=0;i<n+1;i++){
    cout<<res[i]<<" ";
  }
  cout<<endl;

}
