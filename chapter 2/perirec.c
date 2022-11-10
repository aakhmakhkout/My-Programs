# include <stdio.h>
/* perimeter of rectangle
a = length
b = breadth
*/
int main () {
    int a, b,i=1;
    while (1) {

    printf("\n\nenter a :"); // a = length
    scanf("%d", &a);

    printf("enter b :"); // b = breadth
    scanf("%d", &b);

    int perimeter = 2 * (a + b); // perimeter of rectangle = 2*(l+b)
    printf("perimeter is : %d", perimeter);
    i++;

    }
    return 0;
}