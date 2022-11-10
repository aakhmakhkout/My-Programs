#include<stdio.h>
#include<math.h>
// precedence
// practice Q4
int main() {
     int a = 5 * 2 - 2 * 3;
     printf("%d \n", a);

     int b = 5 * 2 / 2 * 3;
     printf("%d \n", b);

     int c = 5 * (2/2) * 3;// BODMAS {open bracket first}
     printf("%d \n", c);

     int d = 5 + 2 / 2 * 3;
     printf("%d \n", d);
     return 0;
}