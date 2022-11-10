#include<stdio.h>
// Qus : write a program to input angles of a triangle and check whether itz a triangle or not

int main() {
    int angle1,angle2,angle3;

    printf("Enter Angles : \n");
    scanf("%d\n%d\n%d", &angle1, &angle2, &angle3);

    if(angle1 + angle2 + angle3 == 180) {
        printf("TRIANGLE");
    }
    else {
        printf("NOT A TRIANGLE");
    }
    return 0;
}