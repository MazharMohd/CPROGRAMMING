//wap to take every digit of a no and display sum of there cube of every digit
#include<stdio.h>
int main (){

    int a,p,q,r,sum=0;
    printf("Enter a 3 digit no : ");
    scanf("%d",&a);

    p=a%10;
    sum= sum + p*p*p;
    printf("%d",sum);

    a=a/10;
    q = a%10;
    sum = sum + q*q*q;
    printf("\n%d",sum);


    a = a/10;
    r = a%10;
    sum = sum +r*r*r;

    printf("\n%d",sum);



return 0;
}
