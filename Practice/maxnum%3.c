#include<stdio.h>
// maximum number between 3 numbers
int main() {
    int num1, num2, num3, max;                          

    printf("Enter three numbers \n ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2) {
            printf(" maximum number is : %d", num1);
    } 
    else if (num2 > num3) {
           printf("maximum number is : %d", num2);
    }
    else {
        printf("maximum number is : %d", num3);
    }
    return 0;
}