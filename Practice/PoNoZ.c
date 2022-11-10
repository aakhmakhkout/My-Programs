#include<stdio.h>
// find whether the number is positive or negative or zero
int main() {
    int a;

     printf("Enter the first number : ");
     scanf("%d", &a);

     if (a > 0) {
        printf("The number is positive");
     }
     else if (a < 0) {                         // or if (a < 0)
        printf("number is negative");
     }
     else {                                   // or if (a == 0)
        printf(" number is zero");
     }
     return 0;

}