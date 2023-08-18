//wap to take every digit of a no and display sum of there cube of every digit***********USING FOR LOOP
#include<stdio.h>

void main(){

int no,cube,rem,a;
printf("Enter a no : \n");
scanf("%d",&no);

rem = 0;

for(a=0;no>0;a++)
{
    rem = no%10;
    cube =rem*rem*rem;
    no = no/10;
    printf("%d \n",cube);
}


}
