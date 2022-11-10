#include<stdio.h>
// even or odd

int main() {
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    switch(x%2==0) {
        case 1 : printf("Number is even");
        break;
    default : printf("Number is odd");
    break;
    }
    return 0;
}