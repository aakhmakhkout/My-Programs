#include<stdio.h>
// palindrome or not [palindrome means its original==reverse or not eg. 121, 202] 

int main() {
    int n, num, reverse=0;

    printf("Enter number : ");
    scanf("%d", &n);
    
    (num=n);

    while(num!=0) {

        reverse = (reverse * 10) + (n%10);

        n/=10;
    }

    if (reverse==num) {
    printf("%d IS PALINDROME");
    }else {
        printf("%d IS NOT PALINDROME");
    }
    return 0; 
    }