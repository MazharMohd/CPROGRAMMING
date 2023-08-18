/*  wap to pass individual elements of array to a function  and count of even no from that no */

#include<stdio.h>

int even(int x){


    if(x%2==0){
           return 1;
    }
    else{
        return 0;
    }

}
void main () {

    int tr[5];
    int d,count;

    printf("Enter value in array : \n");
    for(d=0;d<5;d++){
        scanf("%d",&tr[d]);
    }
    count =0;
    printf("\n even no are : \n");
    for(d=0;d<5;d++){
       count =count + even(*(tr+d));
    }
    printf("%d",count);

}
