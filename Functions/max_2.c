#include<stdio.h>
// find max between two numbers by using functions

int number(int num1, int num2);
int number(int num1, int num2) {
    if(num1>num2) {
        num1 = 1;
    }
    return num1;
}

int main() {
    int num1, num2, max;
    printf("Enter Number 1 : ");
    scanf("%d", &num1);
    printf("Enter Number 2 : ");
    scanf("%d", &num2);
    
    max = number(num1,num2);
    if (max==1) {
        printf("%d is Maximum\n%d is Mininmum", num1, num2);
    }
    else {
        printf("%d is Maximum\n%d is Minimum", num2, num1);
    }
    return 0;
}