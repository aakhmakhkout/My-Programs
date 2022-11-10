#include<stdio.h>
#include<math.h>
// Relational operators

//relation between operators
int main() {
// == (equal to)
    printf("%d \n", 4==4);                 // 1, true output 1(2,3,4,-1,-2 etc) means true and 0 means false
    printf("%d \n", 3==4);                 // 0,false
    printf("%d \n", 10==10);               // 1

// >,>= (greater, greater or equal to)
    printf("%d \n", 4>3);                  // 1
    printf("%d \n", 4>=4);                 // 1 
    printf("%d \n", 2>5);                  // 0  

// <,<= (less than, less than or equal to)
    printf("%d \n", 3<4);                  // 1
    printf("%d \n", 9<=9);                 // 1
    printf("%d \n", 5<2);                  // 0

// !=n(not equal to, opposite to equal to)
    printf("%d \n", 4!=4);                 // 0
    printf("%d \n", 5!=5);                 // 0
    printf("%d \n", 6!=10);                // 1

    return 0;
}