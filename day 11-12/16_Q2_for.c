/*
Q2: WAP TO PRINT THE FOLLOWING PATTERN? using for loop

54321
5432
543
54
5
*/

#include<stdio.h>
void main (){

int s,g,t;

printf("Enter a no : ");
scanf("%d",&s);

for(g=1;g<=s;g++){

    for(t=s;t>=g;t--){
        printf("%d",t);
    }
    printf("\n");
}

}
