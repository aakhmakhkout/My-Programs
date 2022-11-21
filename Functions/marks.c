#include<stdio.h>
// calculate marks of science, math and computer by functions
float marks(float s, float m, float c);
float marks(float s, float m, float c) {
         float per, avg;
         avg = ((s + m + c) / 3);
        //  per = ((avg / 100.0) * 100.0);
         return avg;
}

int main() {
    float s,m,c;

    printf("Enter Marks Of Science : ");
    scanf("%f", &s);
    printf("Enter Marks Of Science : ");
    scanf("%f", &m);
    printf("Enter Marks Of Science : ");
    scanf("%f", &c);

    printf("Total Percentage Is : %.2f", marks(s,m,c));
    return 0;
}