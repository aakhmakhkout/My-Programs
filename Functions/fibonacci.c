#include<stdio.h>
// fibonacci series by recursion

int fibo(int n);
int fibo(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
    int a,b,f;
     a = fibo(n-1);
     b = fibo(n-2);
    f = a + b;
    return f;
}

int main() {
    int fib, f;
    printf("Enter Fibonacci Series Number : ");
    scanf("%d", &f);

    fib = fibo(f);
    printf("Fibonacci Of %d is : %d", f,fib);
return 0;
}