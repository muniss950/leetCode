#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Function to be coded:

int casetest(int a,int b){
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
void printGreaterArray(int arr1[], int size1, int arr2[], int size2){
  int val1=0,val2=0;
  for(int i=0;i<size1-1;i++){
    val1+=casetest(arr1[i],arr1[i+1]);
  }
  for(int i=0;i<size2-1;i++){
    val2+=casetest(arr2[i],arr2[i+1]);
  }
  if(val1>val2){
    for(int i=0;i<size1;i++){
      printf("%d ",arr1[i]);
    }
  }
  else{
  for(int i=0;i<size2;i++){
      printf("%d ",arr2[i]);
  }

  }
}

int main() {
    // Input arrays
    int arr1[100], arr2[100];
    int size1, size2;

    // Read the first array from stdin
    
    scanf("%d", &arr1[0]);
    size1 = 1;
    while (getchar() != '\n') {
        scanf("%d", &arr1[size1]);
        size1++;
    }

    // Read the second array from stdin
    
    scanf("%d", &arr2[0]);
    size2 = 1;
    while (getchar() != '\n') {
        scanf("%d", &arr2[size2]);
        size2++;
    }

    // Call the function to compare and print the array with greater value
    printf("Array with greater value: ");
    printGreaterArray(arr1, size1, arr2, size2);

    return 0;
}
