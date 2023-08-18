/* wap to create menu driven program if choice 1 call su4
                                        choice 2 call subtract
                                        choice 3 call multiply
                                        choice 4 call division
                                        choice 5 call wrong no.

*/

#include <stdio.h>
void sum();
void sub();
void multiply();
void divide();
void main()
{

    int a;
    printf("Enter \n\t1 for Addition \n\t2 for Subtraction \n\t3 for Multiply \n\t4 for Divide\n ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
    {
        sum();
        break;
    }
    case 2:
    {
        sub();
        break;
    }
    case 3:
    {
        multiply();
        break;
    }
    case 4:
    {
        divide();
        break;
    }
    default :
    {
        printf("wrong choice. ");
    }
    }
}

void sum(){
    int a,b,c;
printf("Enter two value to add :\n");
scanf("%d%d",&a,&b);

c=a+b;
printf("sum of %d + %d is %d.\n",a,b,c);

}
void sub(){
        int a,b,c;
printf("Enter two value to subtract :\n");
scanf("%d%d",&a,&b);

c=a-b;
printf("Subtraction of %d - %d is %d ",a,b,c);
}
void multiply(){
    int a,b,c;
    printf("Enter two value to multiply :\n");
    scanf("%d%d",&a,&b);

    c=a*b;
    printf("multiply of %d * %d is %d\n",a,b,c);

}
void divide(){
    int a,b,c;
    printf("Enter two value to divide :\n");
    scanf("%d%d",&a,&b);

    c=a/b;
    printf("Divide of %d / %d is %d \n",a,b,c);
}
