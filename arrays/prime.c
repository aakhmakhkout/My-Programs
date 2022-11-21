#include<stdio.h>
// prime or not

int main() {
    int num, prime;
    printf("\n\nEnter Your Number : ");
    scanf("%d", &num);

    for(int i=2; i<num ; i++) {
        if(num%i==0) {
           prime = 1;
            break;
        }
    }
    if(prime == 1) {
        printf("%d is Not Prime", num);
    }
    else {
        printf("%d is Prime", num);
    }
    printf("\n\n");
    return 0;
}