# include <stdio.h>
//area of circle
int main() {
   float radius;
   printf("enter radius : ");
   scanf("%f", &radius);

   float result = 3.14 * radius * radius;
   printf("area is : %f", result);

   return 0;
}