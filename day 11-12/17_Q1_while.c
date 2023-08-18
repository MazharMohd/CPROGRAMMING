/*Q1: WAP TO PRINT THE FOLLOWING PATTERN?   USING WHILE LOOP


1
22
333
4444
55555
*/
#include<stdio.h>
void main(){

int s,t,r;
printf("Enter a no : ");
scanf("%d",&s);
t=1;
while(t<=s){

    r=1;
    while(r<=t){
     printf("%d",t);
     r++;
    }
    printf("\n");
    t++;
}




}
