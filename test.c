

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Function to be coded:

int case(int a,int b){
  if(a>0 && b>0){
    return a+b;
  }
  else if(a<0 && b<0){
    return a*b;
  }
  else{
    if(a-b>0)
      return a-b;
    else {
      return b-a;
    }
  }
  return -1;
}
int main(){
  case(1,2);
}
