// wap to convert decimal to  binary using recursion

#include<stdio.h>

int binary(int p){
    int t;
    t=p%2;
    if(p==0)
        return 0;
    binary(p/2);
        printf("%d ",t);

}

void main(){

    int n;
    scanf("%d",&n);
    binary(n);


}
