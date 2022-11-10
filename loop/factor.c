#include<stdio.h>
// factors of any number

int main() {
int num, i, j=1;
    while (1) {
        printf("\n\nEnter any number : ");
        scanf("%d", &num);
        printf("Factors of %d are : ", num);
             i=1; 
        while (i<=num) {

        if(num%i==0) {
            printf("%d, ",i);
        }
            i++;
        }
    //    j++;
    }
    return 0;
}