#include<stdio.h>
// taking no.s from user until user enters an odd number

int main() {
    int x;

    do {
        printf("Enter Number : ");
        scanf("%d", &x);

        printf("%d \n", x);

        if(x%2 !=0) {
            break;
        }

    }while(1);
    printf("Oops you entered odd number");
    return 0;
}