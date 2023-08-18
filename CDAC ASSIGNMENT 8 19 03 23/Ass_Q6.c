//wap to check the given no is palindrome number
#include<stdio.h>
void main(){

int n,o,c,rn;
printf("Enter two no to check no b/w the are palindrome number or not : ");
scanf("%d%d",&n,&o);
while(n<o){
c=n;
rn=0;
while(c>0){

    rn = rn*10 + c%10;
    c=c/10;
}

if(n==rn){
    printf("given no %d is palindrome number \n",n);
}
n++;
}
}
