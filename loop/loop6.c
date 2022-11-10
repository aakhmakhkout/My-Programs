#include<stdio.h>
// swaping of ist and last digit
int main() {
    int num,first,last,swap;
    printf("Enter number : ");
    scanf("%d", &num);

    last = num%10;
    printf("last digit is : %d", last);

    while (num>=10) {
        (num = num/10);
        (first=num);
    }
    printf("\n\nfirst digit is : %d", first);

    swap=first;
    first=last;
    last=swap;

    printf("\n\nist [ swap ] : %d", first);
    printf("\nlast [ swap ] : %d", last);
    return 0;
}