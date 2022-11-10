#include<stdio.h>
// print the numbers from 0 to n, if n is given by the user

int main() {
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);
    
    //int x = 0;
    //while(x <= n) {
        //printf("%d \n", x);
        //x++;
    //}
    // or for loop
    for(int i = 0; i<=n; i++) {
        printf("%d \n", i);
    }
    return 0;
}