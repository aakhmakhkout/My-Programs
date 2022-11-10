#include<stdio.h>
// Qus : check whether a char is alphabet, digit or symbol

int main() {
    char x;
    printf("Enter the character \n");
    scanf("%c", &x);

    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'B')) {
        printf("%c is an alphabet", x);
    }
    else if (x >= '0' && x <= '9') {
        printf("%c is a digit", x);
    }
    else {
        printf("%c is a symbol", x);
    }
    return 0;
}
