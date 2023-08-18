//wap to read no from user and check its second last digit is even or odd

#include<stdio.h>

int main(){

int a,b;
printf("Enter value of a :");
scanf("%d",&a);

b= a/10;

if(b%2==0){
    printf("second last digit is even");
}
else{
    printf("second last digit is odd");
}

return 0;
}

