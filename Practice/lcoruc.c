#include<stdio.h>
// QUS : find if a caharcter entered by the user is lower case or upper case
int main() {
    char x;
    printf("Enter the char : ");
    scanf("%c", &x);

      //(x >= 'a' && x <= 'z') ? printf("The char is in lower case") : printf("The char is in upper case");
    
    if (x >= 'a' && x <= 'z') {
             printf("LOWER CASE");
    }
    else if (x >= 'A' && x <= 'Z') {
            printf("UPPER CASE");
    }
    else {
        printf("Not an valid alphabet !");
    }
    return 0;
}