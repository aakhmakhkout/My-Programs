#include<stdio.h>
// multiplication of any number

int main() {
    int n, x, y;


    printf("\n\nEnding : ");
    scanf("%d", &x);

    for (int i=1; i<=x;i++) {
    printf("Enter two Numbers\n");
    scanf("%d\n%d", &n, &y);
    printf("MULTIPLICATION OF %d * %d = %d\n",n,y,(n*y));
    }
    return 0;
}