//wap to count the digit of a given no and check the result is even odd
#include<stdio.h>
int main (){
int a,count =0;
printf("Enter a no : ");
scanf("%d",&a);

while(a>0){
    a=a/10;
    count++;
}
//printf("total count %d",count);               used to check loop
if(count%2==0)
    printf("Even");
else
    printf("odd");

}
