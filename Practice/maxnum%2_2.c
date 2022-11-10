#include<stdio.h>
//QUS : To find the maximum number b/w two numbers
int main() {
    int x,y;
    printf("Enter two numbers \n \n");
    scanf("%d%d", &x, &y);

    if (x > y) {
        printf("\n%d is the max number", x);
    }
    else if (y > x) {
        printf("\n%d is the max number", y);
    }
    else {
         if (x == y) {
            printf("Both numbers are equal");
         }
    }
return 0;

}