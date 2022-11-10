#include<stdio.h>
// print cube of any number

int main() {
    int n, cube=0, numbers;

    printf("\n\nInput Number of terms : ");
    scanf("%d", &numbers);

    for(int i=1;i<=numbers;i++) {
        printf("\n\nEnter Number : ");
        scanf("%d", &n);
        (cube=n*n*n);
        printf("\nNumber is : %d ", n);
        printf(" and its cube is : %d", cube);
    }
    return 0;
}