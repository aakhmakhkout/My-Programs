#include<stdio.h>
// Nested if
int main() {
    int x;
    printf("enter the number : ");
    scanf("%d", &x);

    if (x >= 0) {
        printf("The number is positive \n");
    if (x%2 == 0) {
        printf("And the number is even \n");
    } else {
        printf("And the number is odd");
    }
    }
    else {
        printf("number is negative");
    }
    return 0;
}