#include<stdio.h>
// positive negative or zero
int main() {
    int x;
    printf("Enter Number : ");
    scanf("%d", &x);

    switch (x>0) {
        case 1 : printf("number is positive");
        break;
        case 0 : //if ist condition is false (i.e it will be either o or negative)
        switch (x<0) {
            case 0 : printf("number is zero");
            break;
            case 1 : printf("number is negative");
            break;
        }
 }
    return 0;
}