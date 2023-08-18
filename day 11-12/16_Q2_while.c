/*
Q2: WAP TO PRINT THE FOLLOWING PATTERN?

54321
5432
543
54
5
*/
#include<stdio.h>
void main(){

int s,t,q;
printf("Enter a no : \n");
scanf("%d",&s);

t=1;
while(t<=s){
        q=s;

        while(q>=t){
            printf("%d",q);
            q--;
        }
    printf("\n");
    t++;
}
}
