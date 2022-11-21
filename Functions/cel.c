#include<stdio.h>
// convert celcius into fahrenheit
float fah(float c);
float fah(float c) {
    float f=0;
    f = (c * 1.8) + 32;
    return f;
}
int main() {
    float c;
    printf("Enter Celcius : ");
    scanf("%f", &c);

    printf("\n\n%.2f degree celcius To fahranheit is %.2f", c, fah(c));
    return 0;
}