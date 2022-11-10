#include<stdio.h>
// switch and case

// constant == year
int main() {
    int year; /* 1 = jan, 2 = feb, 3 = mar, 4 = apr, 5 = may, 6= june, 7 = july, 8 = august, 9 = sept
    10 = oct, 11 = nov, 12 = dec
     */
    printf("enter the constant : ");
    scanf("%d", &year);

    switch (year) {
        case 1 : printf("jan");
              break;
        case 2 : printf("feb");
              break;
        case 3 : printf("mar");
              break;
        case 4 : printf("apr");
              break;
        case 5 : printf("may");
              break;
        case 6 : printf("june");
              break;
        case 7 : printf("july");
              break;
        case 8 : printf("aug");
              break;
        case 9 : printf("sept");
              break;
        case 10 : printf("oct");
              break;
        case 11 : printf("nov");
              break;
        case 12 : printf("dec");
              break;
        default : printf("error ! month not found");                  
    }
    return 0;
}