//wap to check the given no is palindrome number
#include<stdio.h>
void main(){
int n,c,rn;
printf("Enter a no to check no is palindrome number or not : ");
scanf("%d",&n);
c=n;
rn=0;
while(c>0){

    rn = rn*10 + c%10;
    c=c/10;
}

if(n==rn){
    printf("given no %d is palindrome number ",n);
}
else{
    printf("Give no %d is not a palindrome number",n);
}
}
