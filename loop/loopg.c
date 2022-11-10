#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void main() {
    int hour, minute, second, hh=0, mm=0, ss=0;

    printf("\n\n********************\n");
    printf("     COUNTER      \n");
    printf("********************\n\n");  

    printf("Enter Hour {0-24}: ");
    scanf("%d", &hour);

    printf("Enter Minute {0-60}: ");
    scanf("%d", &minute);

    printf("Enter Second {0-60}: ");
    scanf("%d", &second);


    for(hh=hour;hh>=0;hh--) {

        for (mm=minute;mm>=0;mm--) {

            for (ss=second;ss>=0;ss--) {

                sleep (1);
                system("cls");
                printf("\n\n                     ********************\n");
                printf("                           COUNTER      \n");
                printf("                     ********************\n\n");
                printf("                  Hours   :    Minutes   :   Seconds\n\n");
                printf("                   %d     :       %d             %d     \n", hh,mm,ss);
            }
            (second=59);
        }
        (minute=59);
    }
    (hour=59);
}   
