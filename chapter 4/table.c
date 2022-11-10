#include<stdio.h>
// table of n

int main() {
     int n;
    // printf("Enter Number : ");
    // scanf("%d", &n);

    // for (int i = 1; i<=20; i++) {
    //     printf("%d \n", n * i);
    // }

        printf("Enter any number : ");
    scanf("%d", &n);

    for(int i=20;i>=1;i--) {
        printf("%d \n", n*i);
    }
    return 0;
}