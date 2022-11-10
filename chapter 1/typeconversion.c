#include <stdio.h>
#include <math.h>
/* conversion is of two types ; implicit and explicit
imlicit = by default {int = stores = float/double}
explicit = by user {double/float = can't store = int}

{ small value is converted in large value by default }
*/
int main() {
    printf("%f", 3.0/2);
    return 0;
}