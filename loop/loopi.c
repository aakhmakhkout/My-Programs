#include<stdio.h>
// print Prime numbers From 1 to n

int main() {
    int i=1,prime1,prime2,num=1;

    printf("Enter Value : ");
    scanf("%d", &num);
    printf("\n\nPrime Numbers : ");

    for(;i<=num; i++) {
        prime1=(6*i) - 1;
        prime2=(6*i) + 1;

        if (prime1 && prime2 <= num) {

        printf("%d, %d, ",prime1, prime2);
        }
    }
    return 0;
}