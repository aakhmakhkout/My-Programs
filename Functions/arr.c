#include<stdio.h>
// cube of any number

int cube(int num);
int cube(int num) {
    return num * num * num;
}

int main() {
    int num, c;
    printf("Enter Your Number : ");
    scanf("%d", &num);

    c = cube(num);

    printf("Cube Of %d is %d", num, c);
return 0;
}