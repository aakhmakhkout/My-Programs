#include<stdio.h>
// calculate profit or loss [method 2nd]

int main() {
    float x,y,z;                        

    printf("ENTER SELLING PRICE : ");
    scanf("%f", &x);

    printf("ENTER COST PRICE : ");
    scanf("%f", &y);

    if (x>y) {
        (z=x-y);
        printf("PROFIT = %f", z);
    }
    else if (y>x) {
        (z=y-x);
        printf("LOSS = %f", z);
    }
    else {
        printf("NOR PROFIT NOR LOSS");
    }
    return 0;
}