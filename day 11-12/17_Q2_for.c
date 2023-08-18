/*
Q2: WAP TO PRINT THE FOLLOWING PATTERN? USING FOR LOOP


1
* *
1 2 3
* * * *
1 2 3 4 5
* * * * * *
*/
#include<stdio.h>
void main(){

int s,t,r;
printf("Enter a no : \n");
scanf("%d",&s);
for(t=1;t<=s;t++){

    for(r=1;r<=t;r++){
        if(t%2==0){
            printf("* ");
        }
        else{
            printf("%d ",r);
        }
    }

    printf("\n");
}


}
