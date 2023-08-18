/*  Q4: WAP TO PRINT THE FOLLOWING PATTERN? USING FOR LOOP

    123456
    23456
    3456
    456
    56
    6

*/
#include<stdio.h>
void main(){

int s;
int t , p;

printf("Enter a no : \n");
scanf("%d",&s);

for(t=1;t<=s;t++){

    for(p=t;p<=s;p++){
        printf("%d",p);
    }

    printf("\n");
}

}
