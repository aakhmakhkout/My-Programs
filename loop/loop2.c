#include<stdio.h>
// sum of even numbers

int main() {
    int n,sum=0;
printf("enter any number : ");
scanf("%d", &n);


for (int i=1;i<=n;i++) {
    if (i%2==0) {
    sum=sum+i;                
    printf("%d",i);
    }
}
printf("\n\nsum of even numbers is : %d", sum);
    return 0;
}