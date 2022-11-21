#include<stdio.h>
int main() {
    // address of a variable
    // int x=5;
    // printf("%p", &x);
    // return 0;
    // printf("%d", test[4]);

    // char test[15]={'N','O','U','M','A','A','N','-','N','A','B','I'};
    
    // for (int i=0;i<=15;i++) {
    //     printf("%c", test[i]);
    // }

    int test[5];
    int i=0, j=0;
    printf("enter 5 numbers\n");
    for (;i<5;i++) {
    scanf("%d", &test[i]);
    }

    for(int i=0; i<5; i++) {

    printf("%d, ", test[i]);
  
    return 0;
}