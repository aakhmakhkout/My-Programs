#include <stdio.h>
#include <math.h>
/* we can store large value in small by using conversion type
{float/double = int = by using int-type in value}
*/

int main() {
    int a = (int) 1.999999;
    printf("%d", a);
    return 0;
}