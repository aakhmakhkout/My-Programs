#include<stdio.h>
// calculate Profit or Loss
int main() 
{
    float x,y;                         // price = Rupees, and datatype for Rupees is float
    printf("Enter selling Price : ");
    scanf("%f", &x);

    printf("Enter Cost Price : ");
    scanf("%f", &y);

    float z=x-y;

    if (z>0) {
        printf("\nPROFIT OF : %f", z);
    }
    else if (z<0) {
        printf("\nLOSS OF : %f", z);
    }
    else {
        printf("\nNO PROFIT NOR LOSS");
    }
    return 0;
}