#include<stdio.h>
// calculator

int main() {
    float a,b,c; 
    char operators;
    printf("Choose operation [+ - * /] : ");
    scanf("%c",&operators);

    printf("Enter ist number : ");
    scanf("%f", &a);

    printf("Enter 2nd number : ");
    scanf("%f", &b);

    switch (operators) {
        case '+' : 
        //0r (c = a+b);
        printf("Sum of two numbers is : %f",(a+b));
        break;
        case '-' :
        //or (c = a-b);
        printf("Difference Between two numbers is : %f",(a-b));
        break;
        case '*' :
        //or (c = a*b);
        printf("multiplication of two numbers is : %f",(a*b));
        break;
        case '/' :
        //0r (c = a/b);
        printf("Division of two numbers is : %f",(a/b));
        break;
        default : printf("Invalid Operator!");
    }
    return 0;
}