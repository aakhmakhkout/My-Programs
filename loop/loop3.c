#include<stdio.h>
// how many digits are in a number
int main() {
    int num, count=0;

printf("enter the number : ");
scanf("%d", &num);

while (num!=0) {
    count++;

    num=num/10;
}
printf("Digits are : %d", count);
return 0;
}