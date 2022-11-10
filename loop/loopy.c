#include<stdio.h>

int main() {
    int i=1,n1,n2;
    char opt;
    float n3,n4;
        do {
        printf("\n\n    For Add[+] Enter 1.\n\n    For Sub[-] Enter 2.\n\n    For Mul[*] Enter 3.\n\n    For Div[/] Enter 4.\n\n ");
        
        printf("\nchoose operation { 1[+],  2[-],  3[*],  4[/]  : ");
        scanf("%d", &opt);
        switch (opt) {
        case 1 : 
        printf("\nEnter ist number : ");
        scanf("%d", &n1);
        printf("\nEnter 2nd number : ");
        scanf("%d", &n2);
        printf("\nSum is : %d + %d = %d",n1,n2,(n1+n2));
        break;
        
        case 2 :
        printf("\nEnter ist number : ");
        scanf("%d", &n1);
        printf("\nEnter 2nd number : ");
        scanf("%d", &n2);
        printf("\nSubtraction is : %d - %d = %d", n1,n2,(n1-n2));
        break;

        case 3 : 
        printf("\nEnter ist number : ");
        scanf("%d", &n1);
        printf("\nEnter 2nd number : ");
        scanf("%d", &n2);
        printf("\nMultilication is : %d * %d = %d", n1, n2, (n1*n2));
        break;

        case 4 :
       printf("\nEnter ist number : ");
        scanf("%d", &n1);
        printf("\nEnter 2nd number : ");
        scanf("%d", &n2);
        printf("\nDivision is : %f / %f = %f", n3, n4, (n3/n4));
        break;

        default : printf("\nInvalid operator!");
        break;
        i++;

       }
        }while (1);

    return 0;
}