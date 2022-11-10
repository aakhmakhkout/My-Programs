#include<stdio.h>
#include<math.h>
// average and sum of 5 numbers

int main() {
      float avg, num1, num2, num3, num4, num5, sum;
  

    printf("enter five numbers : \n");
    scanf("%f\n%f\n%f\n%f\n%f", &num1, &num2, &num3, &num4, &num5);

    sum = num1 + num2 + num3 + num4 + num5;
    printf("sum is : %f \n", sum);

    avg = sum/5;
    printf("average is : %f", avg);
    return 0;
}