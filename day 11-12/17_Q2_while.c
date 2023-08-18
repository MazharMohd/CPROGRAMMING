/*
Q2: WAP TO PRINT THE FOLLOWING PATTERN? USING While LOOP


1
* *
1 2 3
* * * *
1 2 3 4 5
* * * * * *
*/

#include<stdio.h>

void main(){

    int s,r,t;
    printf("Enter a no : \n");
    scanf("%d",&s);
    t=1;
    while(t<=s){
        r=1;
        while(r<=t){
            if(t%2==0){
                printf("* ");
            }
            else{
                printf("%d ",r);
            }
            r++;
        }
        printf("\n");
        t++;
    }



}
