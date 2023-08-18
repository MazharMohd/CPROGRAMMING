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


int a;
int t;

printf("Enter a no : \n");
scanf("%d",&a);

while(a>=1){
        printf("\n");

        t=a;
        while(t>=1){
            printf("%d ",t);
            t--;
        }
        a--;
}
}
