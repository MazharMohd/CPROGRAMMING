/*Q3: WAP TO PRINT THE FOLLOWING PATTERN?

654321
54321
4321
321
21
1

*/

#include<stdio.h>
void main(){

int s,d,f;

printf("Enter a no : \n");
scanf("%d",&s);

for(d=s;d>=1;d--){
printf("\n");

    for(f=d;f>=1;f--){
        printf("%d",f);
    }


}


}
