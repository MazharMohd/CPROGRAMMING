//wap to read two no from user if 1st no is grater than 2nd no then display there addition otherwise display there subtraction .
#include<stdio.h>
int main(){

int a,b;
printf("Enter two no : ");
scanf("%d%d",&a,&b);

if(a>b){
    printf("%d is grater than %d and there sum is %d ",a,b,a+b);
}
else{
    printf("%d is smaller than %d and there subtraction is %d ",a,b,b-a);
}

return 0;
}
