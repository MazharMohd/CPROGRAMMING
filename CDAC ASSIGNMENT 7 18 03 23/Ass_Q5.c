//wap to find factorial of a given no
#include<stdio.h>
int main(){

int a,p=1;
printf("Enter a no : ");
scanf("%d",&a);

while(a>0){
    p=p*a;
    a--;

}

printf("Factorial of given no is %d  ",p);
return 0;
}
