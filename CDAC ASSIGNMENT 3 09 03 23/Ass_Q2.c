//swap to swap 2 dig. Without 3rd variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number =");
    scanf("%d",&a);
    printf("\nEnter second number =");
    scanf("%d",&b);

    printf("Value of a and b before swap %d %d",a,b);

    a= a+b;
    b= a-b;
    a=a-b;
    printf("\n After swap");
    printf("\n Value of a %d",a);
    printf("\n Value of b %d",b);

    return 0;
}
