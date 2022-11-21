#include<stdio.h>
// even or odd by using functions
int numf(int n);

int main() {
while(1) {
    int n;
    printf("\n\nEnter Number : ");
    scanf("%d", &n);
    
    numf(n);
}
    return 0;
}
int numf(int n) {
        if(n%2==0) {
        printf("%d is even", n);
    }else {
        printf("%d is odd", n);
    }
}