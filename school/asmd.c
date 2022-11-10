#include<stdio.h>

int main() {
    int x,y,z;
    // ADDITIION
    printf("ADDITION: \n");
    scanf("%d\n%d", &x, &y);
    
    (z = x+y);
    printf("SUM IS : %d\n", z);

    // SUBTRACTION
    printf("SUBTRACTION: \n");
    scanf("%d\n%d", &x, &y);

    (z= x-y);
    printf("SUB IS : %d \n", z);

    // MULTIPLICATION
    printf("MULTIPLY: \n");
    scanf("%d\n%d", &x, &y);

    (z= x*y);
    printf("MUL IS : %d \n", z);

    // DIVISION
    printf("DIVISION: \n");
    scanf("%d\n%d", &x, &y);

    (z = x/y);
    printf("DIV IS : %d \n", z);
    return 0;
}