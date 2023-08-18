/*  wap pass individual element of 2d array to a function and display it there

*/
#include<stdio.h>
void display(int x){

    printf("%d\n",x);

}

void main (){

    int arr[3][3];
    int k,t;

    for(k=0;k<3;k++){
            for(t=0;t<3;t++){
                    scanf("%d",&arr[k][t]);
            }
    }

    printf("\n\n");

    for(k=0;k<3;k++){
        for(t=0;t<3;t++){
            display(arr[k][t]);
        }
    }


}
