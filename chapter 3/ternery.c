#include<stdio.h>
// even odd by ternery operator
int main () {
    int x;
    printf("enter the number : ");
    scanf("%d", &x);

    (x%2 == 0) ? printf("number is even") : printf("number is odd");
    return 0;
}