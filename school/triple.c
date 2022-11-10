#include<stdio.h>

int main() {
    int x,y;

    printf("Enter ist number : ");
    scanf("%d", &x);

    printf("enter 2nd number :");
    scanf("%d", &y);

    int z = x + y;

    printf("sum is : %d \n", z);

    if (x == y) 
        printf("triple value is : %d \n", z * 3);
    
    return 0;
}

