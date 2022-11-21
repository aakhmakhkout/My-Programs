#include<stdio.h>
// table of n
void table(int n);
int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    table(n);// argument or actual parameter
    return 0;

}
void table(int n) { // parameter
        for(int i=1; i<=20; i++) {
        printf("\n%d X %d = %d", n,i,(n*i));
    }
}