//wap to display difference of last two digite of a no.
#include<stdio.h>
int main(){

int a,p,q,diff;
printf("Enter a 3 digit no : ");
scanf("%d",&a);

p = a%10;
a = a/10;
q = a%10;

diff = p-q;
printf("difference of last two digits %d",diff);


return 0;
}
