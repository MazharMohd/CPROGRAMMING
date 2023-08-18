//wap to find smallest of two no.
#include<stdio.h>
int main(){
int a;
int p,q;
printf("Enter two no ");
scanf("%d%d",&p,&q);

a = p<q?p:q;
printf("Smallest is %d",a);
return 0;
}
