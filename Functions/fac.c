#include<stdio.h>
// factorial of n by recursion

int fact(int n);
int fact(int n) {
    if(n==1) {
        return 1;
    }
    int x,y;
    x=fact(n - 1);
    y=x*n;

    return y;
}

int main() {
    int n;
    printf("Factorial Of : ");
    scanf("%d", &n);

    printf("Factorial of %d is : %d", n, fact(n));
    return 0;
}