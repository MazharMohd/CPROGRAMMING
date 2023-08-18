//WAP TO READ 5 NO FROM USER TO DISPLAY TERRE MULTIPLICATION ?

#include<stdio.h>
int main (){

    int a,b,c,d,e,total;
    printf("Enter any five no.");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    total = a*b*c*d*e;

    printf("Multiplication of five no. %d * %d * %d * %d * %d is %d ",a,b,c,d,e,total);

    return 0;
}
