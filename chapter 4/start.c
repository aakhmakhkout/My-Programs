#include<stdio.h>
// print number from 1 to 10, for, while and do loop

int main() {
//     for(int i=1;i<=10; i++) {
//         printf("%d\n", i);
//     }
//     return 0;
// }

int i=1;

// while(i<=10) {
//     printf("%d\n", i);
//     (i++);
// }

do {
    printf("%d", i);
    i++;
}while(i<=10);
return 0;
}