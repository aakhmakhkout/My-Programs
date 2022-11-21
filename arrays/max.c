#include<stdio.h>
// find maximum and minimum

int main() {
    int arr[100], max=0,min=0, s;
    printf("Enter size of array : ");
    scanf("%d", &s);

    printf("\n\nEnter Elemnets\n\n");

    for(int i=0; i<s; i++) {
        printf("Element : %d = ", i);
        scanf("%d", &arr[i]);

    }

    max=arr[0];
    min=arr[0];

    for(int i=0; i<s; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("maximum is : %d", max);
    printf("\nminimum is : %d", min);
return 0;
}