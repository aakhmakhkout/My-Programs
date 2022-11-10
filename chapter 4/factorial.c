#include<stdio.h>
// print factorial of n numbers
int main() {
    int fact=1,n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        (fact = fact*i);
    }
    printf("factorial is : %d \n", fact);
return 0;
}