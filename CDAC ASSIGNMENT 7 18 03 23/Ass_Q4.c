//wap to read a no from the user and check the given no is palindrome number ex :121,131
#include<stdio.h>
int main(){

int a,i,j,p=0 ;                 //  p is new no
printf("Enter a no : ");
scanf("%d",&a);

i=a;
while(i>0){

    j= i%10;
    i = i/10;
    p = p*10+j;
}

if(a==p){
        printf("Given no %d is a palindrome number %d",a,p);
}
else
{
    printf("Given no %d is not a palindrome number",a);
}

return 0;
}
c
