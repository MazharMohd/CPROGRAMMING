//wap to take every digit of a no and display cube of every digit**********USING WHILE LOOP
#include<stdio.h>
void main(){

int no,t;

printf("Enter a no : \n");
scanf("%d",&no);

while(no>0){

    t= no%10;
    no=no/10;
    printf("\t%d \n",t*t*t);

}

}
