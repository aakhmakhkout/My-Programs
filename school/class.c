#include<stdio.h>

int main() {
    int ivalue;
    char cvalue;
    float fvalue;

    printf("input integer, float and character value : ");
    scanf("%d%f%*c%c", &ivalue, &fvalue, &cvalue); // %*c is used to skip the enter(character) or space

    printf("Integer value : %d \n", ivalue);
    printf("float value : %f \n", fvalue);
    printf("char value : %c \n", cvalue);
   
    return 0;
}