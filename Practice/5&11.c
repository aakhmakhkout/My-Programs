#include<stdio.h>
// number is divisible by 5 and 11 or not?
int main() {
    int y;

    printf("Enter the Number : ");
    scanf("%d", &y);
    /*
    if y modulo division 5 is 0
    and y modulo division 11 is 0 then
    the number is divisible by 5 and 11 (both)
    */
    if ((y%5 == 0) && (y%11 == 0)) {
        printf("Number is divisible by 5 And 11");
    } 
    else {
        printf("Number is not divisible by 5 And 11");
    }
    return 0;
}