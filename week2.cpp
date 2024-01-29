#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Function to be coded:
void printGreaterArray(int arr1[], int size1, int arr2[], int size2){
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
