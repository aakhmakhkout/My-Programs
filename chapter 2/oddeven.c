#include<stdio.h>
// even and odd using logical operator
int main() {
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);

    (num%2 == 0 && printf("number is even")) || printf("number is odd");
    return 0;
}