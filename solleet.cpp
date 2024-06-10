#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   string gcdOfStrings(string str1, string str2) {
        string res,foo;
        int l1=str1.size();
        int l2=str2.size();
        if(l1<l2){
          foo=str1;
        }
        else{
          foo=str2;
       }
        for(int i=0;i<foo.size();i++){
          for(int j=0;j<i;j++){

          }
        }

        cout<<foo<<endl;
        return res;
    }
};
int main(){
  Solution foo=Solution();
  cout<<foo.gcdOfStrings("sdgsdg", "Sdgs");
}
