#include<stdio.h>
// Diameter, circumference and area of a circle

float diameter(float r);
float circumference(float r);
float area(float r);



int main() {
    float a,b,c,r;
    
    printf("Enter Radius : ");
    scanf("%f", &r);

    a = diameter(r);
    b = circumference(r);
    c = area(r);

    printf("Diameter of Circle Is : %.2f\nCircumference of Circle is : %.2f\nArea of Circle is : %.2f",a,b,c);
    return 0;
}

float diameter(float r){
    return  (r * 2);
}
float circumference(float r) {
    return (2 * 3.14 * r);
}
float area(float r) {
    return (3.14 * r * r);
}