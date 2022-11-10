#include<stdio.h>
// table from 1 to 20
int main() {
    int n;
printf("Enter number : ");
scanf("%d", &n);

for(int i=1;i<=n;i++) {

for(int j=1;j<=10;j++){
     printf("%d*%d = %d,  ",i,j,(i*j));
}
printf("\n\n");
}
return 0;
}