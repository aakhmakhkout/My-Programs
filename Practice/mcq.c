#include<stdio.h>
// mcq in switch

int main() {
    int option1,option2,option3,option4;

    printf("which number is even in the following option.\n1. 57\n2. 75\n3. 42\n4. 47\n");
    scanf("%d", &option1);
    printf("which number is maximum amoung the following options.\n1. 6857\n2. 7589\n3. 5769\n4. 3458");
    scanf("%d", &option2);
    printf("Which one is a bird amoung the following options. \n1. cow\n2. cat\n3. monkey\n4.eagle");
    scanf("%d", &option3);
    printf("which is an animal amoung the following options. \n1. cow\n2. crow\n3. eathworm\n4. none of the above");
    scanf("%d", &option4);

    switch (option1) {
        case 1 : printf(" 1. wrong, 57 is not even");
        break;
        case 2 : printf(" 2. right, 75 is not even ");
        break;
        case 3 : printf(" 3. wrong, 42 is even");
        break;
        case 4 : printf(" 4. wrong, 47 is not even");
        break;

        switch (option2) {
        case 1 : printf(" 1. wrong answer, 6856 is not the maximum number");
        break;
        case 2 : printf(" 2. right answer, 7589 is the maximum number");
        break;
        case 3 : printf(" 3. wrong answer, 5769 is not the maximum number");
        break;
        case 4 : printf(" 4. wrong answer, 3458 is not the maximum number");
        break;

        switch (option3) {
        case 1 : printf(" 1. right answer, cow is not a bird");
        break;
        case 2 : printf(" 2. wrong answer, cat is not a bird");
        break;
        case 3 : printf(" 3. wrong answer, monkey is not a bird");
        break;
        case 4 : printf(" 4. right answer, eagle is a bird");
        break;

        switch (option4) {
        case 1 : printf(" 1. right answer, cow is an animal");
        break;
        case 2 : printf(" 2. wrong answer, eagle is not an animal");
        break;
        case 3 : printf(" 3. wrong answer, earthworm is not an animal");
        break;
        case 4 : printf(" 4. none of the above, wrong answer");
        break;
        }
        }
        }
    
     default : printf("invalid option!"); 
     }
     return 0;
}