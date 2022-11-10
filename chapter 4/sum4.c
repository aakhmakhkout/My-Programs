#include<stdio.h>

int main() {
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);
    
    int sum = 0;

    for (int j=n; j>=1; j--) {
        (sum = sum + j);
        printf("%d \n", j);
    }
    printf("sum is : %d", sum);
    return 0;
}