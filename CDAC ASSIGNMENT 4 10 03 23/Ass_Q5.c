//wap to read two no from user and if first no is less than second no then display all the no else display in reverse order

#include<stdio.h>
int main(){
int p,q;
printf("Enter two no.");
scanf("%d%d",&p,&q);

if (p<q)
    printf("Entered value of p and q are %d %d ",p,q);
else
    printf("%d  %d",q,p);
return 0;
}
