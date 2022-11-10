#include<stdio.h>
int main() {

int n;

for(int i=n;1;) {
    printf("enter any number : ");
    scanf("%d", &n);
    printf("%d\n", n);
    
    if(n%2!=0) {
        break;
    }
}
printf("odd");
return 0;
}