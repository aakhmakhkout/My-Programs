#include<stdio.h>

int main() {
    int phy, che, bio, math, com;
    float sum, per;

    printf("ENTER MARKS OF PHYSICS [0-100] : ");
    scanf("%d", &phy);

    printf("ENTER MARKS OF CHEMISTRY [0-100] : ");
    scanf("%d", &che);

    printf("ENTER MARKS OF BIOLOGY [0-100] : ");
    scanf("%d", &bio);

    printf("ENTER MARKS OF MATHAMETICS [0-100] : ");
    scanf("%d", &math);
 
    printf("ENTER MARKS OF COMPUTER [0-100] : ");
    scanf("%d", &com);

    sum = (phy + che + bio + math + com);
    per = ((sum/500)*100);

    if (per >= 90 && per == 100) {
        printf("Your grade is A, with percentage : %f", per);
    }
    else if (per >= 80 && per < 90) { // or only per >= 80
        printf("Your grade is B, with percentage : %f", per);
    }
    else if (per >= 70 && per < 80) {
        printf("Your grade is C, with percentage : %f", per);
    }
    else if (per >= 60 && per < 70) {
        printf("Your grade is D, with percentage : %f", per);
    }
    else if (per >= 50 && per < 60) {
        printf("Your grade is E, with percentage : %f", per);
    }
    else if (per >= 40 && per < 50) {
        printf("Your grade is F, with percentage : %f", per);
    }
    else if (per < 40) {
        printf("You are fail, with percentage : %f", per);
    }
    else {
        printf("marks Are Invalid");
    }
    return 0;   
}