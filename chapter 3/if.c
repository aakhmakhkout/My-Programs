#include<stdio.h>
// grade system
int main() {
    int x;
    printf("enter the number : ");
    scanf("%d", &x);

    if (x == 100) {
        printf("Good");
    }
    
    if (x == 70) {
    printf("average");
    }

    if (x == 50) {
    printf("medium");
    }

    else {
        printf("bad");
    }
    return 0;
}