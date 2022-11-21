#include<stdio.h>
// functions
void printfnumaan();     // function declaration
void numu();             // function declaration

void printnumaan() {     // function definition
    printf("Asalam-u-alikum\n");
}

    void numu() {
    printf("Bonjour\n");
    }

int main() {
    char country;
    printf("Enter Country [K=kashmiri, F=french] : ");
    scanf("%c", &country);
    if(country=='k') {
    printnumaan();         // function call
    }
    else if (country=='f') {
    numu();                // function call
    }
    else {
        printf("INVALID COUNTRY!");
    }
    return 0;
}
