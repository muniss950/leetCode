
#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
  struct info{
    char s;
    int index;

    bool operator>(const info& rhs) const
        {
            // return (int)s > (int)rhs.s && (int)index<(int)rhs.index;
          if (s > rhs.s) {
            return true;
              } else if (s == rhs.s) {
                  return index < rhs.index;  // Using `index` as a tiebreaker
              } else {
                  return false;
              }
        }
  };
    string clearStars(string s) {
        int min=0;
        string res;
        int start=0;
        int count=0;
        int index=-1;
        priority_queue<info,vector<info>,greater<info>>heap,foo;
        vector<int>strindex;
        for(int i=s.length()-1;i>=0;i--){
          if(s[i]=='*'){
            index=i;
            strindex.push_back(i);
            break;
          }
        }
        if(index==-1){
          return s;
        }
        for(int i=0;i<index+1;i++){
            if(s[i]!='*'){
              info stuff={s[i],i};
              heap.push(stuff); 
              // cout<<heap.top()<<endl;;
                continue;
            }
            strindex.push_back(i);
            // foo=heap;
            // if(!foo.empty()){
            //   cout<<foo.top().index<<endl;
            //   strindex.push_back(foo.top().index);
            //   foo.pop();
            // }
            
            if(!heap.empty()){
              cout<<heap.top().index<<endl;
              strindex.push_back(heap.top().index);
              heap.pop();
            }
            count++;
            // start=i+1;
        }
        // for(int i=0;i<count;i++){
        //   if(!heap.empty()){
        //     cout<<heap.top().index<<endl;
        //     strindex.push_back(heap.top().index);
        //     heap.pop();
        //   }
        // }
        sort(strindex.begin(),strindex.end());
        // while(!heap.empty()){
        //     res.push_back(heap.top().s);
        //     heap.pop();
        //     // cout<<res<<endl;
        //   }
         
        int fool=0;
        for(int i=0;i<index;i++){

          while(strindex[fool]<i){
            fool++; 
          }
          if(strindex[fool]==i){
            fool++;
            continue;
          }
          res.push_back(s[i]);

        }
        for(int i=index+1;i<s.length();i++){
          res.push_back(s[i]);
          }
        // cout<<res<<endl;
        return res;
    }
};
int main(){
  Solution foo=Solution();
  cout<<foo.clearStars("a*baa*")<<endl;
}
