#include<stdio.h>
// Print n number of odd numbers and their sum

int main() {
    int n, sum=0;

    printf("Enter Value : ");
    scanf("%d", &n);

    printf("ODD NUMBERS ARE : ");

    for (int i=0;i<=n;i++) {
        if(i%2==0) {
            continue;
        }
        printf(" %d,", i );
        (sum=sum+i);
    } 
    printf("\n\nSum of Odd Numbers is : %d", sum);
    return 0;
}