#include<stdio.h>

int main() {
    int sum=0;
    for(int i=5; i<=50; i++) {
        sum = sum + i;
    }
    printf("sum of 5 to 50 numbers is : %d \n", sum);
    return 0;
}