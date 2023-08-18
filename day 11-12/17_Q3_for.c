/*
Q3: WAP TO PRINT THE FOLLOWING PATTERN?     USING FOR LOOP


1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/

#include<stdio.h>
void main(){

int count =1;
int s,t,r;
printf("Enter a no : \n");
scanf("%d",&s);

for(t=1;t<=s;t++){

        for(r=1;r<=t;r++){
            printf("%d ",count);
            count++;
        }
    printf("\n");
}


}
