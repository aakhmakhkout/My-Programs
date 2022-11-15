#include<stdio.h>
int main() {
    // address of a variable
    // int x=5;
    // printf("%p", &x);
    // return 0;

    int test[10]={2,4,223,45,34,423342,43,32,342,6675};
    printf("%d, %d, %d, %d", test[8],test[3],test[3],test[5]);
    // printf("%d", test[4]);

    return 0;
}