#include<stdio.h>
int main() {
    int num[5]={130,120,15,9,156};

    // for(int i=0;i<5;i++)
    // {
    //     printf("%d  ",*(num+i));
    // }

    int position, value, i=0,flag=0;

    printf("Enter Number : ");
    scanf("%d", &value);

    for(; i<=5; i++) {
        if(num[i] == value) {
            position = i+1;
            flag=1;
            break; 
        }
        
    }
    if(flag==1)
    {
        printf("number is at position %d",position);
    }
    else{
        printf("number not found");
    }
    return 0;
}