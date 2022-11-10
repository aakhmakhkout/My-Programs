#include<stdio.h>
// print the sum of first n numbers

int main() {
     int n=0;
    
    // printf("Enter the number : ");
    // scanf("%d", &n);

    for(int i=5; i<=50; i++) {
       (n = n + i);
    }
        printf("sum is : %d \n", n);
    return 0;
}