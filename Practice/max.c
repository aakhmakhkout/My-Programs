#include<stdio.h>
// maximum number between two numbers 2nd method

int main() {
    int x,y,z;
    printf("Enter Two Numbers \n");
    scanf("%d\n%d", &x, &y);

    (z=x>y);/* if condition is true(i.e z=1) then case 1 will be executed, if condition is false,(i.e z=0)
    default condition will be executed */
    
    
    switch(z) {
        case 0 : printf("maximum number is %d", y); // or
        break;
        case 1 : printf("maximum number is : %d", x);
        break;
    }
    return 0;
}