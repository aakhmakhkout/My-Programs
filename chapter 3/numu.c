#include<stdio.h>
// switch and case

// which number is even
int main() {
    int option;

    printf("Enter the right option : ");
    scanf("%d", &option);

    switch (option) {
        case 1 : printf("1 is not even");
             break;
        case 2 : printf("2 is even");
            break;
        case 3 : printf("3 is not even");
            break;
        case 4 : printf("7 is not even");
            break;
        default : printf("wrong number");
    }
    return 0;
}