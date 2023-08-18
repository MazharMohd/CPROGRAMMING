// wapp to find sum of square of all the even no upto 20(including 20)
#include<stdio.h>
int main(){

int z,i, sum=0;
printf("Enter a no ");
scanf("%d",&z);

i=1;
while(z>=i){

    if(i%2==0){
        sum= sum +i*i;
      //  printf("%d\n",sum);                 used to check sum after every odd no
    }
      i++;
}
printf("sum of square all even no up to %d is %d",z,sum);
return 0;
}
