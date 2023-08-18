//wap to read a no from user and check the positive or negative using conditional operators
// hint value = exp1? exp 2 : exp3 ;

#include<stdio.h>
int main (){
int x,y;
printf("Enter a no ");
scanf("%d",&x);

x<0?printf("Negative"):printf("positive");

return 0;
}
