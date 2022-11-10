#include<stdio.h>
// calculator

int main() {
    float a,b,c,d,e,f; 
    char operators;
    printf("Choose operation [+ - * /] : ");
    scanf("%c",&operators);

    printf("Enter ist number : ");
    scanf("%f", &a);

    printf("Enter 2nd number : ");
    scanf("%f", &b);

    (c = a+b);
    (d = a-b);
    (e = a*b);
    (f = a/b);

    switch (operators) {
        case '+' : 
        printf("Sum of two numbers is : %f", c);
        break;
        case '-' :
        printf("Difference Between two numbers is : %f", d);
        break;
        case '*' :
        printf("multiplication of two numbers is : %f", e);
        break;
        case '/' :
        printf("Division of two numbers is : %f", f);
        break;
        default : printf("Invalid Operator!");
    }
    return 0;
}