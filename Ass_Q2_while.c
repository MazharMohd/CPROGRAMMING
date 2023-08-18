//wap to display sum of every digit of a no***********USING WHILE LOOP

#include<stdio.h>
void main(){

    int no,t;
    printf("Enter a no no : \n");
    scanf("%d",&no);
    t=0;
    while(no>0){
        t=t+no%10;
        no =  no /10;

    }
printf("Sum of all digits of entered no is %d",t);

}
