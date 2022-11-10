#include<stdio.h>
// find first and last digit of a number

int main() {
    int num,first,last;
    printf("Enter number : ");
    scanf("%d", &num);

    (first=num);
    
    last = num%10;
    printf("last digit is : %d", last);

    while (num>=10) {
        (num = num/10);
        (first=num);
    }
    printf("\n\nfirst digit is : %d", first);
    return 0;
}