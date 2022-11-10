#include<stdio.h>
// draw right angled traingle using ******

void main() {
    int rows,i,j;
    printf("Rows : ");
    scanf("%d", &rows);
    for (i=1;i<=rows;i++) 
    {
        for(j=1;j<=i;j++) {

        printf("%d",j);         // for numbers ["%d", j]
        }
        printf("\n");
    }
}
