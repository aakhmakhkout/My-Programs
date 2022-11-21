#include<stdio.h>
// 2D array
int main(){
    int x=0;
    int name[100][100];
    printf("Sizes of index : ");
    scanf("%d", &x);

    // for(int i=0; i<x; i++) {

    //     for(int j=0; j<x; j++) {
    //         printf("\nElement row %d And Column %d : ",i,j);
    //         scanf("%d", &name[i][j]);

    //     }
    // }
           for(int i=0; i<x; i++){
            for(int j=0; j<x; j++) {
            
            if(i==j) {
                name[i][j] = 1;
            }else {
                name[i][j] = 0;
            }
            }
            }
            printf("|");
           for(int i=0; i<x; i++){
            for(int j=0; j<x; j++) {

                printf("%3d", name[i][j]);
            
            }
            printf("|\n|");
           }
    return 0;
}