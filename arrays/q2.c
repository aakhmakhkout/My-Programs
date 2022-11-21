#include<stdio.h>
// seperate even and odd elements in an array

int main() {
    int arr[5], r;

    printf("Enter Elements in array : \n");
        
    for(int i=0;i<5; i++) {
    printf("Element : %d = ", i);
    scanf("%d", &arr[i]);
    }


    printf("\n\nEven Numbers : ");
    for(int i=0;i<5;i++) {
         if(arr[i]%2==0) {
               printf("%d  ", arr[i]);
        }
    }

    
    printf("\n\nOdd Numbers : ");
    for(int i=0; i<5; i++) {
         if(arr[i]%2==0) {
         continue;
        }
               printf("%d  ", arr[i]);
   }
   return 0;
}