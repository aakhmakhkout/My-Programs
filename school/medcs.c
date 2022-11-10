#include<stdio.h>
// Q9 : Attendence > 75 = allowed, else not allowed, allowed if any medical cause
int main() {
     float per,ch,ca;
     int medcs;

    printf("Number Of Classes Held [0-100]: ");
    scanf("%d", &ch);

    printf("Number Of Classes Attended [0-100]: ");
    scanf("%d", &ca);
    
    printf("Any Medical cause [1 for yes - 0 for no] : ");
    scanf("%d", &medcs);

    per = ((ca/ch)*100);

    if (per>=75) {
        printf("Student is allowed to sit in exam and percentage is : %f", per);
    }
    else if (per <75 && medcs == 1) {
        printf("Attendance is low but allowed due to medical cause");
    }
    else {
        printf("Attendence is low and can't be allowed to sit in exam");
    }
    return 0;
}