//wap to read a no from user and multiple every digit and display its multiplication
#include<stdio.h>
int main(){

int a,p,total =1;
printf("Enter a number : ");
scanf("%d",&a);

while(a>0){
    p = a%10;
    total = total * p;
    a = a/10;
}

printf("Total = %d",total);

return 0;
}


