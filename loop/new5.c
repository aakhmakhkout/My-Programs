#include<stdio.h>

int main() {
    int age,exp,i=1;
    float salary,bonus; 
    printf("\n\nBonus[+1000] Criteria = AGE SHOULD BE GREATER THAN 25 \n\nAND EXPRIENCE SHOULD BE MORE THAN 10 YEARS");
    printf("\n\nAGE LIMIT = Greater or equal to 16, upto 50\n\nAnd Experience = From 1 Upto 35");

    while (1) {
    printf("\n\n* Enter Age : ");
    scanf("%d", &age);

    printf("\n* Enter Experience : ");
    scanf("%d", &exp);

    printf("\n* Enter Salary : ");
    scanf("%f", &salary);
    if ((age>25 && age<=50) && (exp>=10 && exp<=35)) {
       (bonus=salary+1000);
        printf("\n\nYour Salary + Bonus Is = %f", bonus);
    }
    else if ((age<=20 && age>=16) && (exp<10 && exp>=1)) {
        printf("\n\nYour Salary is [NO BONUS] : %f", salary);
    
    }
    else {
        printf("\n\nINVALID AGE OR EXPERIENCE!");
        i++;
    }
    }
    return 0;
}