#include<stdio.h>
// marks sheet
int main() {
    int x;
    printf("Marks obtained : ");
    scanf("%d", &x);

    if (x >= 90 && x == 100) {
        printf("aaesal bach & grade is A+");
    }

    else if (x >= 80 && x < 90) {
        printf("shabash & grade is A");
    }

    else if (x >= 70 && x < 80) {
        printf("good & grade is B");
    }

    else if (x >= 60 && x < 70) {
        printf("weldone & grade is C");
    }

    else {
        printf("you are fail");
    }
    return 0;
}