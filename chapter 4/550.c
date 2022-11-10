#include<stdio.h>
// print all odd numbers from 5 to 50
int main() {
    for(int i=5;i<=50;i++) {
        if(i%2==0) { // i%2==0
            continue;// print ---> %d, i
        }
        printf("%d \n", i);
    }
    return 0;
}