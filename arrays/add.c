#include<stdio.h>
// addition of two numbers 

int main() {
    int x=0;
    int arr1[100][100];
    int arr2[100][100];
    int arr3[100][100];

    printf("Enter size of matrix : ");
    scanf("%d", &x);

    for (int i=0; i<x ; i++) {
        for (int j=0; j<x; j++) {
            printf("Element row %d and column %d : ", i,j);
            scanf("%d", &arr1[i][j]);
        }

    }
        printf("\n\nEnter 2nd Array\n\n");
    for (int i=0; i<x ; i++) {
        for (int j=0; j<x; j++) {
            printf("Element row %d and column %d : ", i,j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n\n1st Array\n\n");
    for (int i=0; i<x ; i++) {
        for (int j=0; j<x; j++) {
            printf("%3d", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n2nd array\n\n");
    for (int i=0; i<x ; i++) {
        for (int j=0; j<x; j++) {
            printf("%3d", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSum of Two MAtrixes\n\n");
    for (int i=0; i<x ; i++) {
        for (int j=0; j<x; j++) {
            arr3[i][j]=arr2[i][j] + arr1[i][j];
        }
    }
    for (int i=0; i<x ; i++) {
        for (int j=0; j<x; j++) {
            printf("%3d", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

    