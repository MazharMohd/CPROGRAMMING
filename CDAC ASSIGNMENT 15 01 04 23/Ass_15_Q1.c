 /* wap to pass 5 elements to a function and display there square in calling function   */


 #include<stdio.h>

 int square(int x){

     int sq;
     sq = x*x;

     return sq;


 }

 void main (){


     int a[5];
     int t,sq;

     printf("Enter value in array : ");

     for(t=0;t<5;t++){                  //for loop to take vlaue in array
        scanf("%d",&a[t]);
     }

     for(t=0;t<5;t++){
        sq = square(*(a+t));                //sq to hold value returned form function square

        printf("Square of %d is %d\n",a[t],sq);
     }


 }
