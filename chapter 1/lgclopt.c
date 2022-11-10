#include<stdio.h>
#include<math.h>
// logical operators
// to determine logic b/w two values

int main() {

// && AND
    printf("this is AND Operator \n");

    printf("%d \n", 4>3 && 5<7); // 1 TT = T
    printf("%d \n", 5>2 && 9<6); // 0 TF = F
    printf("%d \n", 1>9 && 5<6); // 0 FT = F
    printf("%d \n", 1<1 && 5>9); // 0 FF = F

// || OR
    printf("this is OR Operator \n");

    printf("%d \n", 5>4 || 7<9); // 1 TT = T
    printf("%d \n", 1<4 || 5>9); // 1 TF = T
    printf("%d \n", 4<2 || 5>2); // 1 FT = T
    printf("%d \n", 1<1 || 8>8); // 0 FF = F

// ! NOT - Flip (true into false, false into true)
    printf("this is NOT Operator \n");

    printf("%d \n", !(3>4)); // 1 T
    printf("%d \n", !(4>2)); // 0 F
    printf("%d \n", !((4>1) && (5<8))); // 0 F
    printf("%d \n", !((5>1) && (7<6))); // 1 T
    return 0;
}