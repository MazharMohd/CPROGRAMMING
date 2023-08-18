/*A number is called an Armstrong number if the sum of the cubes of the digits of the number is
enter a number and returns if it is Armstrong or not (use function).
*/

#include<stdio.h>

int amstrong(int t){
   int p, sum=0;

while(t>0){
    p = t%10;
    t=t/10;
    sum = sum + p*p*p;
}
    return sum;
}

void main(){

int num,sum;

printf("Enter a num");
scanf("%d",&num);

sum=amstrong(num);

if(num==sum)
    printf("Given no %d is amstrong no",num);
else
    printf("Given no %d is not amstrong no",num);
}
