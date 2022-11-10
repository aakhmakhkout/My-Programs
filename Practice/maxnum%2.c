#include<stdio.h>
// write a program to find maximum number between 2 numbers (if else statement)
int main() {
    int x;
    int y;

    printf("Enter ist number : ");
    scanf("%d", &x);

    printf("Enter 2nd number : ");
    scanf("%d", &y);

    if (x > y) {
        printf("Maximum number is : %d", x);
    }
    else {
        printf("Maximum number is : %d", y);
    }
    return 0;
}