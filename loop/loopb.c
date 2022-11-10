#include<stdio.h>
// table

int main() {
    int n, x;

    printf("Enter Number : ");
    scanf("%d", &n);

    printf("\n\nTable Ending : ");
    scanf("%d", &x);

    for (int i=1; i<=x;i++) {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}