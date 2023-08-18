//wap to take every digit of a no and display sum of there cube of every digit***********USING DO WHILE LOOP
#include<stdio.h>

void main(){

 int no,rem,cube;

 printf("Enter a no : \n");
 scanf("%d",&no);

 rem = 0;

 do{
    rem = no%10;
    cube = rem*rem*rem;
    no=no/10;
    printf("%d\n",cube);
 }while(no>0);



}
