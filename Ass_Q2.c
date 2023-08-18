//wap to display sum of every digit of a no
#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter 3 digit  no. ");
scanf("%d",&a);

b= a%10;

a = a/10;
c = c%10;

a= a/10;
d= a%10;
//sum = b+c+d;
printf("sum of all digits are %d ",b+c+d);


return 0;
}
