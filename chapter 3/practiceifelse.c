#include<stdio.h>
// else if statement
int main() {
    int x;
    int y;

    printf("Enter ist number : ");
    scanf("%d", &x);

    printf("Enter 2nd number : ");
    scanf("%d", &y);

    if (x > y) {
        printf("Maximum number is : %d", x);
    }
    else if (y > x) {
        printf("Maximum number is : %d", y);
    }
    return 0;
}