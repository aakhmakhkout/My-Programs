#include<stdio.h>
// take no.s as input until user enters a no., i.e multiplyed by 7

int main() {
    int n;
    
    do {
        printf("enter the number : ");
        scanf("%d", &n);

        printf("%d \n", n);

        if(n%7 == 0) {
          break;
        }

    }while(1);
    printf("Number is multiply by 7");
    return 0;
}