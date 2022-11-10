#include<stdio.h>
// reverse of a number

int main() {
    int num, reverse=0;

    printf("Enter number : ");
    scanf("%d", &num);
    
    while(num!=0) {

        reverse = (reverse * 10) + (num%10);

        num=num/10;
    }
    printf("reverse is : %d", reverse);
    return 0; 
    }