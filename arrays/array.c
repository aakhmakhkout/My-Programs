#include<stdio.h>
// reverse array

int main() {
    int input=0;
    int num[input];

    printf("Enter Numbers of Arrays : ");
    scanf("%d", &input);

    for(int i=0; i<input; i++) {
        printf("\n\nElement : %d = ", i);
        scanf("%d", &num[i]);
     
    }
    printf("Reverse values are : ");
    for(int i=input-1; i>=0; i--) {
    printf("%3d", num[i]);
    } 
    
}