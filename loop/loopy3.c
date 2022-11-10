#include<stdio.h>

void main() {
    int i=1;
    float n1,n2;
    char opt;
       while (1) {
        printf("\n\n\nEnter Ist Number : + - * / : Enter 2nd Number : ");
        scanf("%f%c%f", &n1,&opt,&n2);
        switch (opt) {
        case '+' : 
        printf("\nSum is : %f + %f = %f",n1,n2,(n1+n2));
        break;
        
        case '-' :
        printf("\nSubtraction is : %f - %f = %f", n1,n2,(n1-n2));
        break;

        case '*' : 
        printf("\nMultilication is : %f * %f = %f", n1, n2, (n1*n2));
        break;

        case '/' :
        printf("\nDivision is : %f / %f = %f", n1, n2, (n1/n2));
        break;

        default : printf("\nInvalid operator\n\n!");
        break;
        i++;

       }
        }
}