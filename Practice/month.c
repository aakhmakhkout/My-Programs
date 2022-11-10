#include<stdio.h>
//question : print a program to input month number and print number of days in that month

int main() {
    int num;

    printf("Enter Month Number [1-12] : ");
    scanf("%d", &num);

    if(num == 1) {
        printf("Month is January\ndays are : 31"); // or printf("31 days");
    }
    else if (num == 2) {
        printf("Month is Febuary\ndays are : 28"); // or printf("28 days");
    }
    else if (num == 3) {
        printf("Month is March\ndays are : 31");   // or printf("31 days");
    }
    else if (num == 4) {
        printf("Month is April\ndays are : 30");   // or printf("30 days");
    }
    else if (num == 5) {
        printf("Month is May\ndays are : 31");     // or printf("31 days");
    }
    else if (num == 6) {
        printf("Month is June\ndays are : 30");    // or printf("30 days");
    }
    else if (num == 7) {
        printf("Month is July\ndays are : 31");    // or printf("31 days");    
    }
    else if (num == 8) {
        printf("Month is August\ndays are : 31");  // or printf("31 days");as august and july both has 31 days
    }
    else if (num == 9) {
        printf("Month is September\ndays are : 30");// or printf("30 days");
    }
    else if (num == 10) {
        printf("Month is Octobar\ndays are : 31");  // or printf("31 days");
    }
    else if (num == 11) {
        printf("Month is November\ndays are : 30"); // or printf("30 days");
    }
    else if (num == 12) {
        printf("Month is December\ndays are : 31"); // or printf("31 days");
    }
    else {
        printf("Invalid Month Number! Write number from 1-12");
    }
    return 0;
}