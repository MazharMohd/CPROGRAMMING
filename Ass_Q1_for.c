//wap to take every digit of a no and display cube of every digit**********USING FOR LOOP

#include<stdio.h>
void main(){

int no ,t,m;

printf("Enter a no : \n");
scanf("%d",&no);


for(m=0;no>0;m++){

    t=no%10;
    no = no /10;
    printf("\t%d \n",t*t*t);
}


}
