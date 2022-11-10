#include<stdio.h>
// max num / 3 nums
int main() {
    int num1, num2, num3;

    printf("enter the numbers : \n");
    scanf("%d\n%d\n%d", &num1, &num2, &num3);

    if (num1 > num2) {
        if(num1 > num3) {
            printf("max number is : %d", num1);
        }
    }else if (num2 > num3) {
        printf("max number is : %d", num2);
    }
    else {
        printf("max number is : %d", num3);
    }
    return 0;
}