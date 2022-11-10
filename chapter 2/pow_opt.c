#include <stdio.h>
#include <math.h>
/* include math.h
use pow for power
{c is the power of b} 
*/

int main() {
    int b, c;
    b = 3;
    c = 2;

    int power = pow(b,c);
    printf("%d", power);
    return 0;

}