//wap to take every digit of a no and display cube of every digit
#include<stdio.h>
int main(){
int a,b,c,d,cube;
printf("Enter any 3 digit no : ");
scanf("%d",&a);

b = a%10;
cube = b*b*b;
printf("Cube of last digit %d : ",cube);

a = a/10;
c= a%10;
cube = c*c*c;
printf("\nCube of second last digit %d : ",cube);

a= a/10;
d= a%10;
cube = d*d*d;
printf("\nCube of first digit %d : ",cube);

return 0;
}
