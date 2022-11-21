#include<stdio.h>
void table(int a);
void table(int a) {

    for(int i=1;i<=20;i++){

        printf("\n%d * %d = %d",a, i, (a*i) );
    }
}
int main() {
    int a;
    printf("enter number:");
    scanf("%d", &a);
    table(a);
}