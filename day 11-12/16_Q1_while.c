/*Q1: WAP TO PRINT THE FOLLOWING PATTERN? while loop

1
12
123
1234
12345


*/
#include<stdio.h>

void main(){

int s,t,m;

printf("Enter a  no \n");
scanf("%d",&s);
t=1;
while(t<=s){
    m=1;
    while(m<=t){
        printf("%d",m);
        m++;
    }

    printf("\n");
   t++;
}

}

