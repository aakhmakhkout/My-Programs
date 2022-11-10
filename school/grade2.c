#include<stdio.h>
// Q7 : absolute value of a number entered by the user {2nd method}
int main() {
    int x;

    printf("Enter the value : ");
    scanf("%d", &x);

    if (x%1==0) {
        printf("absolute value is : %d", x);
    }
return 0;
}


