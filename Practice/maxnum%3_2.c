#include<stdio.h>
// max num b/w 3 numbers 
int main() {
    int number1, number2, number3, max;

    printf("Enter the numbers \n");
    scanf("%d%d%d", &number1, &number2, &number3);

    if (number1 > number2) {
    if (number1 > number3) { 
        (max = number1);  // if number1 > number2 and number1 > number3
    } else {
        (max = number3); // if number 1 > number2 but number1 !> number3
    }
    }
    else {
        if (number2 > number3) {
            (max = number2); // if number 1 isn't > number2 and number2 > number3
        }
        else {
    (max = number3); // if number1 isn't > number2 and number2 isn't > number3
        }
}
    printf("max number between these three is : %d", max);
return 0;
}