#include<stdio.h>
// Q1 : square or not
int main() {
    int l, b;
    printf("enter length and breadth : \n");
    scanf("%d\n%d", &l, &b);
    if (l==b) {
        printf("square");
    }
    else {
        printf("Not an square");
    }
    return 0;
}