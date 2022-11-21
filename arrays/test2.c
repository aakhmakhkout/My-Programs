#include<stdio.h>
// test

int main() {
    int marks[3];
    printf("Enter Phy Marks : ");
    scanf("%d", &marks[0]);

    printf("Enter che marks : ");
    scanf("%d", &marks[1]);

    printf("Enter math marks : ");
    scanf("%d", &marks[2]);

    printf("Physics Marks = %d, Chemistry Marks = %d, Math marks = %d", marks[0], marks[1], marks[2]);
    return 0;
}