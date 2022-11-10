#include<stdio.h>
#include<math.h>
// number is divisible by 2 or not

int main() {
    int x;
    printf("enter the number :");
    scanf("%d", &x);

    printf("%d", x % 2 == 0);
    return 0;

}