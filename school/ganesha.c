#include<stdio.h>
int main(){

int question1,question2;
printf("how many side in triangles \n(1) 4 \n(2) 3 \n(3) 5 \n");
scanf("%d",&question1);
printf("how many faces in cubeoid \n(1) 6 \n(2) 4 \n(3) 8 \n");
scanf("%d",&question2);

switch(question1){
case 1:printf("wrong answer\n");
break;
case 2:printf("correct answer\n");
break;
case 3:printf("wrong answer\n");
break;
default:printf("invalid option\n");
break;
}
switch(question2){
case 1:printf("correct  answer\n");
break;
case 2:printf("wrong answer\n");
break;
case 3:printf("wrong answer\n");
break;
default:printf("invalid option\n");
break;
}
printf("\nTHANK YOU\n");
return 0;

}
