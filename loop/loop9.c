#include<stdio.h>
// print any ten numbers and calculate their sum and average
int main() {
   int num,sum=0;
   float avg;
   printf("Input Ten Numbers\n");

for(int i=1;i<=10;i++) {
    printf("NUMBER = %d : ", i);

    scanf("%d", &num);
    (sum=sum+num);
} 
printf("Sum of ten Numbers is : %d", sum);
(avg=sum/10.0);
printf("\n\nAVERGARGE OF TEN NUMBERS IS : %f", avg);
    return 0;
}