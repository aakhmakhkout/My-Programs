#include<stdio.h>
// mcq in switch

int main() {
    int option1,option2,option3,option4,marks=0;

    printf("\nwhich number is even in the following options:-\n1. 57\n2. 75\n3. 42\n4. 47\nEnter Option : ");
    scanf("%d", &option1);
    printf("\nwhich number is maximum amoung the following options:-\n1. 6857\n2. 7589\n3. 5769\n4. 3458\nEnter Option : ");
    scanf("%d", &option2);
    printf("\nWhich one is a bird amoung the following options:- \n1. cow\n2. cat\n3. monkey\n4. eagle\nEnter Option : ");
    scanf("%d", &option3);
    printf("\nwhich is an animal amoung the following options:- \n1. cow\n2. crow\n3. eathworm\n4. none of the above\nEnter Option : ");
    scanf("%d", &option4);
    printf("\nANSWERS : \n");

    switch (option1) {
        case 1 : printf("\n(Q1) wrong, 57 is not even.\n\n");
        break;
        case 2 : printf("\n(Q1) wrong, 75 is not even.\n\n");
        break;
        case 3 : printf("\n(Q1) right, 42 is even.\n\n");
        (marks=marks+1);
        break;
        case 4 : printf("\n(Q1) wrong, 47 is not even.\n\n");
        break;
        default : printf("\n(Q1) invalid option!\n\n"); 
        break;
        }
 
        switch (option2) {
        case 1 : printf("(Q2) wrong answer, 6856 is not the maximum number.\n\n");
        break;
        case 2 : printf("(Q2) right answer, 7589 is the maximum number.\n\n");
        (marks=marks+1);
        break;
        case 3 : printf("(Q2) wrong answer, 5769 is not the maximum number.\n\n");
        break;
        case 4 : printf("(Q2) wrong answer, 3458 is not the maximum number.\n\n");
        break;
        default : printf("(Q2) invalid option!\n\n"); 
        break;
        }

        switch (option3) {
        case 1 : printf("(Q3) wrong answer, cow is not a bird.\n\n");
        break;
        case 2 : printf("(Q3) wrong answer, cat is not a bird.\n\n");
        break;
        case 3 : printf("(Q3) wrong answer, monkey is not a bird.\n\n");
        break;
        case 4 : printf("(Q3) right answer, eagle is a bird.\n\n");
        marks=marks+1;
        break;
        default : printf("(Q3) invalid option!\n\n"); 
        break;
        }

        switch (option4) {
        case 1 : printf("(Q4) right answer, cow is an animal.\n\n");
        marks=marks+1;
        break;
        case 2 : printf("(Q4) wrong answer, eagle is not an animal.\n\n");
        break;
        case 3 : printf("(Q4) wrong answer, earthworm is not an animal.\n\n");
        break;
        case 4 : printf("(Q4) wrong answer, none of the above.\n\n");
        break;
        default : printf("(Q4) invalid option!\n\n"); 
        break;
     }
     printf("%d", marks);
     return 0;
}
    