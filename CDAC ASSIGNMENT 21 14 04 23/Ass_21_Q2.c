//wap to take input from user and calculate sum of no


#include<stdio.h>

int sum(int p){
    if(p==0)
    return 0;
    else{
        return (p+sum(p-1));
    }
}

void main (){

    int n,total;
    scanf("%d",n);
    total = sum(n);
    printf("%d",total);
}
