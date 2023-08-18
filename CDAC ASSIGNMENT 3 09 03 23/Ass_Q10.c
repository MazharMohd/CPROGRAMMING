//wap to read two no from user both should be three digit no and check sum of all the digits of this two no are same or not.
#include<stdio.h>
int main(){

int a,b;
int sum_a=0,sum_b=0;
printf("Enter two 3 digit no");
scanf("%d%d",&a,&b);

while(a>0){
        sum_a = sum_a + a%10;
        a=a/10;
}

while(b>0){
        sum_b = sum_b + b%10;
        b=b/10;
}
if (sum_a==sum_b){
    printf("\nBoth are same");
}
else{
    printf("\nBoth are not same");
}


return 0;
}
