//wap to take every digit of a no and display cube of every digit**********USING DO_WHILE LOOP

#include<stdio.h>
void main(){

int no , t;
printf("Enter a no : ");
scanf("%d",&no);

do{
    t= no%10;
    no= no/10;
    printf("\t%d \n",t*t*t);
}
while(no>0);



}
