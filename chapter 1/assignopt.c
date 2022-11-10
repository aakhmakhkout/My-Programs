#include<stdio.h>
#include<math.h>
// assignment operator (a = b, b = value = a)

int main () {
    int a = 5;
    int b = 10;
    a += b; // (a = a + b)

    printf("%d \n", a);
    return 0;
}