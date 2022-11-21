#include<stdio.h>
// print all negative elements from an array

int main() {
    int arr[100],n=0;
    printf("Enter Size of an array : ");
    scanf("%d", &n);
    printf("\n\nInput Elements\n\n");
    for(int i=0; i<n; i++) {
        printf("\nElement : [%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n\nAll negative numbers are : ");
    for(int i=0; i<n; i++) {
        if(arr[i] < 0) {
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}