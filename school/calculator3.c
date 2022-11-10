#include<stdio.h>
// calculator
int main() {
    float a,b,c,d;
    char e;

    printf("enter number 1, Operator[+ - * /], number 2 : ");
    scanf("%f%c%f", &a, &e, &b);

    switch (e) {
    case '+' :
        (d = a+b);
        break;
    case '-' :
        (d = a-b);
        break;
    case '*' :
        (d = a*b);
        break;
    case '/' :
        (d = a/b);
        break;
    default : printf("Invalid Opertaor!");    
    }
    printf("%f",d);
    return 0;
}