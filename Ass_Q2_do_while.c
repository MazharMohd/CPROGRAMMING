//wap to display sum of every digit of a no***********USING DO WHILE LOOP

#include<stdio.h>
void main(){

int no,t;

printf("Enter a no :\n");
scanf("%d",&no);
t=0;

do{
 t= t+no%10;
 no = no/10;
}while(no>0);

printf("Sum of all digits of Entered no is %d",t);

}
