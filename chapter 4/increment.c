#include<stdio.h>
//increment operators
// i++ [post increment] or [x+=]
// ++i [pre increment] or [x+=]

int main() {
    int i = 1;

    //printf("%d \n", i++); // use, then increase, output = 1
    //printf("%d", i); // output = 2

    printf("%d \n", ++i); // increase, then use, output = 2
    printf("%d", i); // output = 2
    return 0;
}