#include<stdio.h>
// Q8 : Attendence > 75 = allowed, else not allowed
int main() {
     float per,ch,ca;

    printf("Number Of Classes Held [0-100]: ");
    scanf("%d", &ch);

    printf("Number Of Classes Attended [0-100]: ");
    scanf("%d", &ca);

    per = ((ca/ch)*100);

    if (per>=75) {
        printf("Student is allowed to sit in exam and percentage is : %f", per);
    }
    else {
        printf("Attendance is low And not allowed to sit in exam");
    }
    return 0;
}