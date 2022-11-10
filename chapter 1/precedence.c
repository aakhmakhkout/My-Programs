#include <stdio.h>
#include <math.h>
/* operater percendence

1. *,/,%
2. +,-
3. = {assignment operator}

*/

int main() {
 int x = 4 + 9 * 10;
 int y = 4 * 3 / 6 * 3; // associativity rule (for same percendence) {from left to right}
 printf("%d \n", x);
 printf("%d", y);
 return 0;
}