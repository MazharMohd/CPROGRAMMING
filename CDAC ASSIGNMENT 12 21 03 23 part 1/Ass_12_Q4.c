// swaping no in array;
//wap to reverse the elements of 1D array .
#include<stdio.h>
     void main (){

     int h[6];
     int b,q,g;

     printf("Enter value in array ");

     for(b=0;b<=5;b++){
        scanf("%d",&h[b]);
     }

    for(b=0,q=5;b<=6/2 && q>=6/2;b++,q--){
          g = h[q];
          h[q] = h[b];
          h[b] = g;
    }
 for(b=0;b<=5;b++){
        printf("%d ",h[b]);
     }


     }
