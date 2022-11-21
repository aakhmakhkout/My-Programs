#include<stdio.h>
// two arrays in decending order

int main() {
    int arr1[3], arr2[3];
    
    printf("\n\nInput 3 Elements of array 1st\n\n");
    for(int i=0; i<3; i++) {
     printf("\nElement : %d = ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\n\nInput 3 Elements of array 2nd\n\n");
    for(int j=0; j<3; j++) {
        printf("\nElement : %d = ", j);
        scanf("%d", &arr2[j]);
    }

    for (int i=3-1, j=3-1; i>=0, j>=0; i--, j--) {
        printf("%2d%2d", arr1[i], arr2[j]);
    }
    return 0;
 }
    
