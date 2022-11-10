#include<stdio.h>
int l=3;
int main() {
    for (int i=1; i<=20;i++) {
        (l=l*3);
        printf("%d \n", l);
    }
}