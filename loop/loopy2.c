#include<stdio.h>
int main() {
    float n1,n2,result;  int i=0;    char opt;
    printf("\n\n-----------Simple Calculator-----------\n");
    printf("\n\n       by : Aakh Makh Kout\n\n");
    
        do {
        printf("\n\n\nNumber 1,  Operator[+ - * /],  Number 2 : ");
        scanf("%f%c%f",&n1,&opt,&n2);
        switch (opt) {
        case '+' : 
        result=n1+n2;
        printf("\nAddition of %f + %f = %f",n1,n2, result);
        break;
        
        case '-' :
        result=n1-n2;
        printf("\nSubtraction of %f - %f = %f",n1,n2, result);
        break;

        case '*' :
        result=n1*n2; 
        printf("\nMultiply of %f * %f = %f",n1,n2, result);
        break;

        case '/' :
        result=n1/n2;
        printf("\nDivision of %f / %f = %f",n1,n2, result);
        break;

        default : printf("\nInvalid operator!");
        break;
       i++;
       }
        }while (1);

    return 0;
}