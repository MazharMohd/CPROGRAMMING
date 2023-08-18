//wap to print  Fibonacci series
#include<stdio.h>
void main(){

int i,p,fibo;
int f1,f2;
printf("enter a no ");
scanf("%d",&p);
f1=0;
f2=1;
for(i=0;i<=p;i++){
    if(i==0)
        printf("%d ",f1);
    else if(i==1)
        printf("%d ",f2);
    else{
        fibo = f1 +f2;
        f1 = f2;
        f2 = fibo;
        printf("%d ",fibo);
    }
}
}
