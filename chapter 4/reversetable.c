#include<stdio.h>

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    for(int i=20; i>=n; i--) {
     printf("%d \n", n*i);
    }
    return 0;
}