#include<stdio.h>
// swaping of 2 numbers
int main() {
    int x=5,y=6;
    x=x+y; // 11
    y=x-y; // 5
    x=x-y; // 6
    printf("x %d \n", x);
    printf("y %d", y);

    return 0;
}