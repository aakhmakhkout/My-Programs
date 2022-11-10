#include<stdio.h>
// atm

int main() {
    int pin, acno, accounttype;
    float amount1,amount2,total_balance=1093246.7894;

    printf("\n\nENTER YOUR ATM PIN : ");
    scanf("%d", &pin);

    if (pin==9999) {
        printf("\n\nWHICH TYPE OF ACCOUNT DO YOU HAVE?\n");
         printf("\nSAVINGS [TYPE '1'] || CURRENT [TYPE '2'] : ");
         scanf("%d", &accounttype);
          printf("\n\nENTER YOUR ACCOUNT NUMBER : ");
          scanf("%d", &acno);
        if (acno==1129) {
        printf("\n\nYOUR NAME IS : AAKH MAKH KOUT \n");
         printf("\n\nYOUR TOTAL BALANCE IS : %f", total_balance);

         if (accounttype==1) {
            printf("\n\nSAVING ACCOUNT\n");
             printf("\nENTER AMOUNT : ");
             scanf("%f", &amount1);

            if (amount1<=15000.00) {
                printf("\nPROCESS SUCCESSFUL; AMOUNT DEBITED = %f", amount1);
                 printf("\n\nREMAINING BALANCE : %f", (total_balance - amount1));
                  printf("\n\nTHANKS, TAKE YOUR RECEIPT.\n\n");
            }else {
                printf("\nINSUFFICIANT BALANCE!");
         }
    }
               else if (accounttype==2) {
                    printf("\n\nCURRENT ACCOUNT\n");
                     printf("\nENTER AMOUNT : ");
                     scanf("%f", &amount2);

                    if (amount2<=15000.00);
                    printf("\nPROCESS SUCCESSFUL; AMOUNT DEBITED = %f", amount2);
                     printf("\n\nREMAINING BALANCE : %f", (total_balance - amount2));
                      printf("\n\nTHANKS, TAKE YOUR RECEIPT\n\n");
                } else {
                    printf("\nINSUFFICIANT BALANCE!");
                }

 
    }  else {
        printf("wrong account number");
    }
    }else {
        printf("wrong pin!");
    }
    return 0;
}