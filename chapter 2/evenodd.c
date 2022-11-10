#include<stdio.h>
// even and odd using logical operator
int main() {
    int x,i=1;
    while (1) {

    printf("\n\nEnter the number : ");
    scanf("%d", &x);

    (x & 1 && printf("number is odd")) || printf("number is even");
    i++;

    }
    return 0;
}