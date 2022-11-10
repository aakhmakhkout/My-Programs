#include<stdio.h>

int main() {
    int n;

    printf("Enter number : ");
    scanf("%d", &n);
                                                   // for short visit sum4.c
    int sum = 0;

    for(int i=1; i<=n; i++) {
        sum = sum + i;
    }
    for(int i=n; i>=1; i--) {
        printf("%d \n", i);
    }
    printf("sum is : %d", sum);
    return 0;
}