#include<stdio.h>
// decrement opertaors
// --i [pre-decrement]
// i-- [post-decrement]

int main() {
    int i = 1;
    //printf("%d \n", i--); // use, then decrease, output = 1
    //printf("%d", i); //output = 0

    printf("%d \n", --i); // decrease, then use, output = 0
    printf("%d", i); // output = 0
    return 0;
}