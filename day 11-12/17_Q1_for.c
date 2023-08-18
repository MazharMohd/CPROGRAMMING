/*Q1: WAP TO PRINT THE FOLLOWING PATTERN?       USINF FOR LOOP


1
22
333
4444
55555
*/

#include<stdio.h>

int main(){

int s,t,r;
printf("Enter a no : \n");
scanf("%d",&s);

for(t=1;t<=s;t++){

    for(r=1;r<=t;r++){
        printf("%d",t);
    }
    printf("\n");
}


}
