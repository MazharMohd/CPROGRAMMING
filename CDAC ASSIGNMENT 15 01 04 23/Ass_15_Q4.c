/*  wap to pass complete array to a function and display square of every element of that array in that
function and in calling function also

*/


#include<stdio.h>
void square(int *cr){
    int t,sq;
    printf("square\n");
    for(t=0;t<5;t++){
        cr[t]=cr[t]*cr[t];
        printf("%d\n",cr[t]);


    }
    printf("**********\n");

}
void main(){

    int pr[5];
    int k;

    for(k=0;k<5;k++){
        scanf("%d",&pr[k]);
    }

        square(pr);

        printf("Square in main : \n");

        for(k=0;k<5;k++){
        printf("%d\n",pr[k]);
    }


}
