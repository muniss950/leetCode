#include<bits/stdc++.h>
using namespace std;

int solve(int n,int k, vector<int> h ){
    int min=INT_MAX;
    int max=INT_MIN;    
    int min_ind,max_ind;
    for(int i=0;i<n;i++){
        if(h[i]<min){
            min_ind=i;
        }
        if(h[i]>max){
            max_ind=i;
        }
    }
    int row=0;
    while(row*n<k){
            row++;
    }
    while(min_ind!=max_ind){
        int x=h[max_ind]-1;
        // int row=0;
        
    }
}
