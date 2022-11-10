#include<stdio.h>
// print the sum of ist n numbers 
int main() {
    int n;
                                                    //for additional, visit sum3.c
    printf("Enter Number : ");
    scanf("%d", &n);

    int sum = 0;

    for (int i=1, j=n;i<=n && j>=1; i++, j--) {        // sum = sum + i    i.e  if n = 3
        (sum = sum + i); // sum += i                   // sum = 0 + 1 = 1 [now sum is = 1]
        printf("%d \n", j);
    }                                                  // sum = 1 + 2 = 3 [now sum is = 3]
    printf("sum of ist n numbers is : %d", sum);       // sum = 3 + 3 = 6
    return 0;
}