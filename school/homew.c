#include<stdio.h>
// 
int main() {
    int amount,note2000=0, note500=0, note200=0, note100=0, note50=0, note20=0, note10=0, note5=0, note2=0, note1=0;

    printf("Enter amount : ");
    scanf("%d", &amount);

    if(amount>=2000) {
      (note2000=amount/2000);
      (amount=amount-note2000*2000);
    }

    if (amount>=500) {
      (note500=amount/500);
      (amount=amount-note500*500);
    }

    if (amount>=200) {
      (note200=amount/200);
      (amount=amount-note200*200);
    }

    if (amount>=100) {
      (note100=amount/100);
      (amount=amount-note100*100);
    }

    if (amount>=50) {
      (note50=amount/50);
      (amount=amount-note50*50);
    }
    
    if (amount>=20) {
      (note20=amount/20);
      (amount=amount-note20*20);
    }
                
    if (amount>=10) {
      (note10=amount/10);
      (amount=amount-note10*10);  
    }         
                  
    if (amount>=5) {
      (note5=amount/5);
      (amount=amount-note5*5);
    }
    
    if (amount>=2) {
      (note2=amount/2);
      (amount=amount-note2*2); 
    }

    if (amount>=1) {
      (note1=amount/1);
      (amount=amount-note1*1);
    }

    printf("\n\n2000 = %d", note2000);
    printf("\n\n500 = %d", note500);
    printf("\n\n200 = %d", note200);
    printf("\n\n100 = %d", note100);
    printf("\n\n50 = %d", note50);
    printf("\n\n20 = %d", note20);
    printf("\n\n10 = %d", note10);
    printf("\n\n5 = %d", note5);
    printf("\n\n2 = %d", note2);
    printf("\n\n1 = %d", note1);


    return 0;
}