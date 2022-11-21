#include<stdio.h>
// find sum of n numbers using recursion

int sum(int n);
int sum(int n) {
    if(n==1) {
       return 1;
    }
    int x,y;
      y = sum(n-1);
      x = y+n;
    return x;
}


int main () {
    int n, x;

    printf("Enter Number : ");
    scanf("%d", &n);

    printf("sum is %d", sum(n));
    return 0;
}