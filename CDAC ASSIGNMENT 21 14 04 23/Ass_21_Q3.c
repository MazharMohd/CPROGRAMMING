// wap to find sum of a digit of no using recursion
#include<stdio.h>

int sum(int p){
   int t;
    if(p==0)
        return 0;
    else{
            t=p%10;
        return (t+sum(p/10));
    }
}

void main(){

    int n,total;
    printf("Enter a no : \n");
    scanf("%d",&n);

    total= sum(n);
    printf("%d",total);

}

