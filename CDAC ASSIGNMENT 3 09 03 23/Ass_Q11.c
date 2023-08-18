//wap to read principle rate of intrest and no of years and find simple interest
#include<stdio.h>
int main(){

int pri,yrs;
float rt,si;

printf("Enter principle ,rate of interest and years : " );
scanf("%d%f%d",&pri,&rt,&yrs);

si = (pri*rt*yrs)/100;
printf("Simple intrest is %0.2f ",si);


return 0;
}
