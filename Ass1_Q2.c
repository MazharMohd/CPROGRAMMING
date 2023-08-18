//wap to read marks of six subjects and display there total and average ?

#include<stdio.h>
int main(){

int s1,s2,s3,s4,s5,s6,total;
float avg;

printf("Enter marks for six subject ");
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);

total= s1+s2+s3+s4+s5+s6;
avg = total/6;

printf("total in all subjects %d \n",total);
printf("Avg of all subjects %f : ",avg);

return 0;
}
