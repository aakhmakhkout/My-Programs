#include<stdio.h>
int main () {
// Q3 : discount of 10% on 1000rs purchase
int qun, unit;
float cost, price,dis;

printf("Enter quantity : ");
scanf("%d", &qun);

unit = 100;
cost = qun * unit;// if quantity is 200 and unit is 100(constant) = 200*100=20000
dis = (0.1*cost);// dis = 10/100=0.1.    0.1*20000 = 2000
price = cost-dis;// final price = 20000(cost)-2000(discount) = 18000
if (cost>=1000) {
    printf("PRICE IS  : %f", price);// if cost(20000) is greater than 1000(i.e true), print price(i.e 18000)
} 
else {
    printf("No discount");// if cost(20000) is not greater than 1000(i.e true) than print no discount
}
}