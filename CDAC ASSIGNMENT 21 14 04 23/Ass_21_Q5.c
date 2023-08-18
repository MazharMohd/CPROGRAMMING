// wap to take choices from user and if choice 1 then

#include<stdio.h>
void convert(int no)
{
    int t = 0, base = 1, rem;
    while (no > 0)
    {
        rem = no % 10;
        t += rem * base;
        no /= 10;
        base *= 2;
    }
    printf("Decimal no : %d",t);
}
void main(){

    int choice,n,val;
    printf("Enter a no : \n");
    scanf("%d",&n);

    printf("Enter your choice : \n");
    scanf("%d",&choice);

    switch(choice){

    case 1 :
        {
           convert(n);

            break;
        }
    case 2 :
        {
            //convert(n);
            break;
        }
        default :
        {
            printf("Enter correct choice : \n");
            break;
        }
    }
}

