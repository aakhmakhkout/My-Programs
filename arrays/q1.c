#include<stdio.h>
// write a program to enter price of three items and print their finalcost with gst

int main() {


float item[3];
float fcost, gst;
printf("Enter cost of 3 items\n");
scanf("%f\n%f\n%f", &item[0], &item[1], &item[2]);

fcost = (item[0] + item[1] + item[2]);
gst = ((fcost/100) * 8);

printf("Final Price is %.2f And with 8per GST %.2f  :  TOTAL = %.2f",fcost, gst, (fcost+gst));
return 0;
}