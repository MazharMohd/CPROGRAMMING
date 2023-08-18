//wap to swap 2 dig.
#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter first number =");
    scanf("%d",&a);
    printf("\nEnter second number =");
    scanf("%d",&b);

    printf("Value of a and b before swap %d %d",a,b);

    c =a+b;
    a=c-a;
    b=c-a;
    printf("\n After swap");
    printf("\n Value of a %d",a);
    printf("\n Value of b %d",b);

    return 0;
}
