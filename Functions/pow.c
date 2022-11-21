#include<stdio.h>
#include<math.h>
// pow 

// area of square
int square(int side);
int square(int side) {
    return side*side;
}
// area of circle 
float circle(float radius);
float circle(float radius) {
    return 3.14 * radius * radius;
}
// area of rectangle
int rectangle(int length, int breadth);
int rectangle(int length, int breadth) {
    return length * breadth;
}

int main() {
int side=0,length,breadth, p, r;
float radius,q;

printf("\n\nEnter side : ");
scanf("%d", &side);
p = square(side);
printf("Area of square : %d", p);

printf("\n\nEnter Radius : ");
scanf("%f", &radius);
q = circle(radius);
printf("Area of circle : %.2f", q);

printf("\n\nEnter Length and breadth\n");
scanf("%d\n%d", &length, &breadth);
r = rectangle(length,breadth);
printf("Area of reactangle : %d", r);


    return 0;
}