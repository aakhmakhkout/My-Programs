#include<stdio.h>
// area of triangle

 int main() {
    int base,height;
    printf("Enter Base and Height of a Triangle \n");
    scanf("%d\n%d", &base, &height);

    float area = (base * height) / 2;
    printf("Area of triangle is : %f",area);
    return 0;
}