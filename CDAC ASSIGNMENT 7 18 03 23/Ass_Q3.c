//wap to read a no from user and revers that no
//hint a = 123 op 321

#include<stdio.h>
int main(){

int p,q,u=0;            //u is new no.
printf("Enter a no : ");
scanf("%d",&p);

while(p>0){
    q=p%10;
    p=p/10;
    u = u*10+q;
   // printf("%d\n",u);                 used to check every digit

}
printf("%d",u);

return 0;
}
