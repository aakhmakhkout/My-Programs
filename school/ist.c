#include<stdio.h>
// mcq in switch

int main() {
    char choice;
    int option1,option2,option3,option4,option5,option6,option7,option8,option9,option10,marks=0,right=0,wrong=0;
    float per,max=10.00;
    printf("\n\n----------------Multiple Choice Questions--------------------\n\n");
    printf("Enter your choice ['y' for yes & 'n' for no : ");
    scanf("%c", &choice);

    switch (choice) {
        case 'y' : printf("\nHERE ARE YOUR QUESTIONS :-\n\n");
       
        printf("\nQ1. which number is even in the following options:-\n1. 57\n2. 75\n3. 42\n4. 47\nEnter Option : ");
         scanf("%d", &option1);
    
        printf("\nQ2. which number is maximum amoung the following options:-\n1. 6857\n2. 7589\n3. 5769\n4. 3458\nEnter Option : ");
         scanf("%d", &option2);

        printf("\nQ3. Which one is a bird amoung the following options:- \n1. cow\n2. cat\n3. monkey\n4. eagle\nEnter Option : ");
         scanf("%d", &option3);

        printf("\nq4. which is an animal amoung the following options:- \n1. cow\n2. crow\n3. eathworm\n4. none of the above\nEnter Option : ");
         scanf("%d", &option4);

        printf("\nQ5. How Many colors are in a Rainbow :- \n1. 5\n2. 6\n3. 7\n4. 8\nEnter option : ");
         scanf("%d", &option5);

        printf("\nQ6. What is the total sum of angles of a triangle :- \n1. 180\n2. 90\n3. 360\n4. 30\nEnter option : ");
         scanf("%d", &option6);

        printf("\nQ7. Which one is living-thing :-\n1. Car\n2. Human\n3. Watch\n4. Door\nEnter option : ");
         scanf("%d", &option7);

        printf("\nQ8. Which one is Non-living thing :-\n1. Human\n2. Plants\n3. Cat\n4. Car\nEnter option : ");
         scanf("%d", &option8);

        printf("\nQ9. what is the sum of 67+36 :-\n1. 103\n2. 101\n3. 110\n4. 106\nEnter option : ");
         scanf("%d", &option9);

        printf("\nQ10. What is the multiply of 65*43 :-\n1. 2695\n2. 2795\n3. 2895\n4. 2995\nEnter option : ");
         scanf("%d", &option10);
     break;
     case 'n' : printf("You Are Out ------->\n");
     break;
     }
        switch (option1) {
        case 3 : printf("\n(Q1) Right answer\n\n");
        (marks=marks+1);
        (right=marks);
        break;
        default : printf("\n(Q1) Wrong answer\n\n"); 
        (wrong=wrong+1);
        break;
        }

        switch (option2) {
        case 2 : printf("(Q2) Right answer\n\n");
        (marks=marks+1);
        (right=marks);
        break;
        default : printf("(Q2) Wrong answer\n\n"); 
        (wrong=wrong+1);
        break;
        }

        switch (option3) {
        case 4 : printf("(Q3) Right answer\n\n");
        (marks=marks+1);
        (right=marks);
        break;
        default : printf("(Q3) Wrong answer\n\n");
        (wrong=wrong+1); 
        break;
        }

        switch (option4) {
        case 1 : printf("(Q4) Right answer\n\n");
        (marks=marks+1);
        (right=marks);
        break;
        default : printf("(Q4) wrong answer\n\n"); 
        (wrong=wrong+1);
        break;
        }

        switch (option5) {
        case 3 : printf("(Q5) Right answer\n\n");
        (marks=marks+1);
        (right=marks);
        break;
        default : printf("(Q5) Wrong answer\n\n");
        (wrong=wrong+1);
        break;
        }

        switch (option6) {
        case 1 : printf("(Q6) Right answer\n\n");
        (marks=marks+1);
        (right=marks);
        break;
        default : printf("(Q6) Wrong answer\n\n");
        (wrong=wrong+1);
        break;
        }

        switch (option7) {
        case 2 : printf("(Q7) Right answer\n\n");
        (marks=marks+1);
        (right=marks);
        break;
        default : printf("(Q7) Wrong answer\n\n");
        (wrong=wrong+1);
        break;
        }

        switch (option8) {
        case 4 : printf("(Q8) Right answer\n\n");
        (marks=marks+1);
        (right=marks);
        break;
        default : printf("(Q8) Wrong answer\n\n");
        (wrong=wrong+1);
        break;
        }

        switch (option9) {
        case 1 : printf("(Q9) Right answer\n\n");
        (marks=marks+1);
        (right=marks);
        break;
        default : printf("(Q9) Wrong answer\n\n");
        (wrong=wrong+1);
        break;
        }
        switch (option10) {
        case 2 : printf("(Q10) Right answer\n\n");
        (marks=marks+1);
        (right=marks);
         break;
        default : printf("(Q10) Wrong answer\n\n");
        (wrong=wrong+1);
       break;
       }
       
    printf("\n\n ANSWERS : \n\n");
    printf("MARKS OBTAINED : %d\n\n", marks);
    printf("NUMBER OF RIGHT ANSWERS : %d\n\n", right);
    printf("NUMBER OF WRONG ANSWERS : %d\n\n", wrong);
    per = (marks/max) * 100;
    printf("Percentge is : %f", per);
    return 0;
}
    