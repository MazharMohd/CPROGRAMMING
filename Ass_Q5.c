//wap to sum of square of first and last digit of no?
#include<stdio.h>
int main(){

int a,p,q,r;
int sum=0;

printf("Enter a 3 digit no ");
scanf("%d",&a);

p = a%10;
a = a/10;

q = a%10;
a=a/10;

r = a%10;

sum = p*p + r*r;
printf("Sum of square of first and last digit %d",sum);


return 0;
}
