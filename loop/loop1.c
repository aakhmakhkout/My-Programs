#include<stdio.h>
// print odd numbers from 0 to n

int main() {
    int n;
printf("enter any number : ");
scanf("%d", &n);

for (int i=1;i<=n;i++) {
    if (i%2!=0) {
                     // continue;   for even
    printf("%d",i);// for odd
    }
}

    return 0;
}