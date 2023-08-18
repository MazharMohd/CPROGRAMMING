/*  Q4: WAP TO PRINT THE FOLLOWING PATTERN?     WHILE LOOP

    123456
    23456
    3456
    456
    56
    6

*/

#include<stdio.h>
void main(){

    int s,t,q;

    printf("Enter a no : \n");
    scanf("%d",s);

    q=1;
    while(q<=s){

        t=q;
        while(t<=s){
            printf("%d",t);
            t++;
        }

        printf("\n");
        q++;
    }



}

