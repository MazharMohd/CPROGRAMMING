//wap to display sum of every digit of a no***********USING FOR LOOP

#include<stdio.h>
void main(){

int no,t,sum;
printf("Enter a no : \n");
scanf("%d",&no);

sum=0;
for(t=0;no>0;t++){
    sum = sum + no%10;
    no = no/10;
}
printf("%d",sum);

}
