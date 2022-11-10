#include<stdio.h>

int main() {
    int x,y,z;

    printf("Enter age of 3 persons : \n");
    scanf("%d\n%d\n%d", &x, &y, &z);
    
    if (x>=18 && x<=50) {
        if(y>=18 && y<=50) {
            if(z>=18 && z<=50) {
                printf("Younger");
            }
        }else {
            printf("Older");
        }
    }
    else {
        printf("OLDER");
    }
    return 0;
}