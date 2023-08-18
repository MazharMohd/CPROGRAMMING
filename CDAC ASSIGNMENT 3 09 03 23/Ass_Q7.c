//wap to find smallest of three no.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && a<c){
        printf("smallest no is %d",a);
    }
    else if (b<a && b<c){
        printf("smallest no is %d",b);
    }
    else{
        printf("Smallest no is %d",c);
    }
    return 0;
}
