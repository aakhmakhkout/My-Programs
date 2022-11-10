#include <stdio.h>
// cube of n
int main() {
    int n,i=1;
    while (1) {

    printf("\n\nenter n : ");
    scanf("%d", &n);

    int cube = n * n * n;
    printf("cube is : %d", cube);
    i++;
    }

   return 0;
}