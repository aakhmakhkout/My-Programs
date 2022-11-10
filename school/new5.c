#include<stdio.h>

int main() {
    int age,exp,salary,bonus;

    printf("Enter Age : ");
    scanf("%d", &age);

    printf("Enter Exprience : ");
    scanf("%d", &exp);

    printf("Enter Salary : ");
    scanf("%d", &salary);

    (bonus=salary+1000);

    if ((age>=20 && age<=50) && (exp>=5 && exp<=25)) {
        printf("\n\nYour Salary + Bonus Is = %d", bonus);
    }
    else if ((age<20) && (exp<5)) {
        printf("\n\nYour Salary is [NO BONUS] : %d", salary);
    }
    else {
        printf("\n\nINVALID AGE OR EXPERIENCE!");
    }
    return 0;
}