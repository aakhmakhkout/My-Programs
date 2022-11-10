#include<stdio.h>
// print numbers from 0 to n, take n from user

int main() {
    int i=0,n;
    printf("Enter any number : ");
    scanf("%d", &n);
    
    while (i<=n) { 
        printf("%d \n", i);
        i++;
    }
    return 0;
}