// wap to create Fibonacci sequence series using recursion


#include<stdio.h>

int fibo(int a)
{
    if(a==1 || a==0){
        return 1;
    }
    else {
        return(fibo(a-1) + fibo(a-2));
    }

}

void main (){


    int n,i;
    printf("Enter a no : \n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("%d ",fibo(i));
    }


}


