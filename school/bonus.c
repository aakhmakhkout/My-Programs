#include<stdio.h>
// Q4 : if years of service is > 5years, add +5% bonus
int main () {
    int sal, years;
    float per, bonus;

    printf("Enter Salary : ");
    scanf("%d", &sal);

    printf("Enter years of service : ");
    scanf("%d", &years);

    per=(0.05*sal);
    bonus=sal+per;

    if (years>5) {
        printf("Your Salary [with Bonus] is : %f", bonus);
    }
    else {
        printf("Sorry You are not eligible for Bonus");
    }
return 0;
}