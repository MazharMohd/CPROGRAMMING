/*  wap to pass individual elements of an array to a function an display only prime no :
*/

#include<stdio.h>
void PrimeNo(int x){

    int q,t,car;
    q=x;
    car=0;
    for(t=2;t<=q/2;t++){
        if(q%t==0){
          car=1;
          break;
        }
    }
    if(car==0){
        printf("Prime No : %d \n",x);
    }


}
void main (){

    int a[5];
    int t;
    printf("Enter value in array : \n");
    for(t=0;t<5;t++){
        scanf("%d",&a[t]);
    }


    for(t=0;t<5;t++){
       PrimeNo(a[t]);
            }



}
