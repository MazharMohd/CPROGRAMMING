//wap to read elements in 1 D array and display sum of cube of all the elements

#include<stdio.h>
 void main(){

 int e[5];
  int f,sum=0;

  printf("Enter an elements in  array : \n");

  for(f=0;f<5;f++){

    scanf("%d",&e[f]);
  }

  for(f=0;f<5;f++){

    sum = sum + e[f]*e[f]*e[f];

  }
 printf("\nsum of cube all the elements in array : %d",sum);
 }
