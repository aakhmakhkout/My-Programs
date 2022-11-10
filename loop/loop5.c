#include<stdio.h>
// sum of ist and last digit of a number
int main() {
    int num, first, last, sum;
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
    
    (sum = last + first);

    printf("\n\nsum is : %d", sum);
    return 0;
}