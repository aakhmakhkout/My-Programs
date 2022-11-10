#include<stdio.h>
// Q5 : grading system
int main () {
    int marks;

    printf("Enter the Marks : ");
    scanf("%d", &marks);

    if (marks > 80) {
        printf("Your grade is A");
    }
    else if(marks>=60 && marks<=80) {
        printf("Your grade is B");
    }
    else if (marks>=50 && marks<=60) {
        printf("Your grade is C");
    }
    else if (marks>=45 && marks<=50) {
        printf("Your grade is D");
    }
    else if (marks>=25 && marks<=45) {
        printf("Your grade is F");
    }
    else {
        printf("you are fail");
    }
    return 0;
}