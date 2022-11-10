#include<stdio.h>
// Qus : check whether the triangle is equilateral, issosceles or scalane triangle

int main() {
    int side1,side2,side3;
    printf("Enter all three sides : \n");
    scanf("%d\n%d\n%d", &side1, &side2, &side3);

    if(side1 == side2 && side2 == side3) {
        printf(" Equilateral Triangle");
    }
    else if ((side1 == side2) || (side1 == side3) || (side3 == side2)) {  
            printf("ISSOSCELESS TRIANGLE");
}  
    else {
        printf("SCALENE TRIANGLE");
    }
    return 0;
}