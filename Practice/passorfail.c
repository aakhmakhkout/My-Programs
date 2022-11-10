#include<stdio.h>
// Check if a student passed or failed [marks > 30 = pass & <= 30 = fail]
int main() {
    int x;

    printf("\nEnter marks [0-100] : ");
    scanf("%d", &x);

    if (x > 30 && x <= 100) {
        printf("\nStudent is pass with marks : %d", x);
    }
    else if (x <= 30 && x >= 0) {
            printf("\nStudent is fail with marks : %d", x);
        }
        else {
            printf("\nWrong Marks");
        }
    return 0;
}

/*(x > 30) ? printf("PASS") : printf("FAIL");
 or (x <=30) ? printf("fail") : printf("pass");
 */